// swift-tools-version: 5.7
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
	name: "libsrtp",
	products: [
		.library(
			name: "libsrtp",
			type: .static,
			targets: ["srtp"]
		),
		.library(
			name: "dylibsrtp",
			type: .dynamic,
			targets: ["srtp"]
		)
	],
	dependencies: [
		.package(url: "git@github.corp.ebay.com:eBayMobile/boringssl.git", branch: "ebay/release"),
	],
	targets: [
		.target(
			name: "srtp",
			dependencies: [
				.product(name: "libcrypto", package: "boringssl"),
				.product(name: "libssl", package: "boringssl"),
			],
			path: "./",
			sources: [
				"crypto/cipher/aes_gcm_ossl.c",
				"crypto/cipher/aes_icm_ossl.c",
				"crypto/cipher/cipher.c",
				"crypto/cipher/null_cipher.c",
				"crypto/hash/auth.c",
				"crypto/hash/hmac_ossl.c",
				"crypto/hash/null_auth.c",
				"crypto/kernel/alloc.c",
				"crypto/kernel/crypto_kernel.c",
				"crypto/kernel/err.c",
				"crypto/kernel/key.c",
				"crypto/math/datatypes.c",
				"crypto/math/stat.c",
				"crypto/replay/rdb.c",
				"crypto/replay/rdbx.c",
				"srtp/ekt.c",
				"srtp/srtp.c",
			],
			publicHeadersPath: "include"
		),
	],
	cLanguageStandard: .gnu11,
	cxxLanguageStandard: .gnucxx20
)
