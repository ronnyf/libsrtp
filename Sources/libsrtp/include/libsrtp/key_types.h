//
//  key_types.h
//
//
//  Created by Falk, Ronny on 12/19/23.
//

#ifndef key_types_h
#define key_types_h

#include <libsrtp/datatypes.h>

typedef struct {
	uint32_t window_start; /* packet index of the first bit in bitmask */
	v128_t bitmask;
} srtp_rdb_t;

/*
 * An rtp_xtd_seq_num_t is a 64-bit unsigned integer used as an 'extended'
 * sequence number.
 */
typedef uint64_t srtp_xtd_seq_num_t;

/*
 * An srtp_rdbx_t is a replay database with extended range; it uses an
 * xtd_seq_num_t and a bitmask of recently received indices.
 */
typedef struct {
	srtp_xtd_seq_num_t index;
	bitvector_t bitmask;
} srtp_rdbx_t;

typedef enum {
	srtp_key_event_normal,
	srtp_key_event_soft_limit,
	srtp_key_event_hard_limit
} srtp_key_event_t;

typedef enum {
	srtp_key_state_normal,
	srtp_key_state_past_soft_limit,
	srtp_key_state_expired
} srtp_key_state_t;

typedef struct srtp_key_limit_ctx_t {
	srtp_xtd_seq_num_t num_left;
	srtp_key_state_t state;
} srtp_key_limit_ctx_t;

typedef struct srtp_key_limit_ctx_t *srtp_key_limit_t;

#endif /* key_types_h */
