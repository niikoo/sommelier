/* Generated by wayland-scanner 1.18.0 */

#ifndef KEYBOARD_EXTENSION_UNSTABLE_V1_CLIENT_PROTOCOL_H
#define KEYBOARD_EXTENSION_UNSTABLE_V1_CLIENT_PROTOCOL_H

#include <stdint.h>
#include <stddef.h>
#include "wayland-client.h"

#ifdef  __cplusplus
extern "C" {
#endif

/**
 * @page page_keyboard_extension_unstable_v1 The keyboard_extension_unstable_v1 protocol
 * @section page_ifaces_keyboard_extension_unstable_v1 Interfaces
 * - @subpage page_iface_zcr_keyboard_extension_v1 - extends wl_keyboard with ack_key events
 * - @subpage page_iface_zcr_extended_keyboard_v1 - extension of wl_keyboard protocol
 * @section page_copyright_keyboard_extension_unstable_v1 Copyright
 * <pre>
 *
 * Copyright 2017 The Chromium Authors.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice (including the next
 * paragraph) shall be included in all copies or substantial portions of the
 * Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 * </pre>
 */
struct wl_keyboard;
struct zcr_extended_keyboard_v1;
struct zcr_keyboard_extension_v1;

/**
 * @page page_iface_zcr_keyboard_extension_v1 zcr_keyboard_extension_v1
 * @section page_iface_zcr_keyboard_extension_v1_desc Description
 *
 * Allows a wl_keyboard to send ack_key requests for each key event of
 * the keyboard to the server.
 *
 * Warning! The protocol described in this file is experimental and
 * backward incompatible changes may be made. Backward compatible changes
 * may be added together with the corresponding uinterface version bump.
 * Backward incompatible changes are done by bumping the version number in
 * the protocol and uinterface names and resetting the interface version.
 * Once the protocol is to be declared stable, the 'z' prefix and the
 * version number in the protocol and interface names are removed and the
 * interface version number is reset.
 * @section page_iface_zcr_keyboard_extension_v1_api API
 * See @ref iface_zcr_keyboard_extension_v1.
 */
/**
 * @defgroup iface_zcr_keyboard_extension_v1 The zcr_keyboard_extension_v1 interface
 *
 * Allows a wl_keyboard to send ack_key requests for each key event of
 * the keyboard to the server.
 *
 * Warning! The protocol described in this file is experimental and
 * backward incompatible changes may be made. Backward compatible changes
 * may be added together with the corresponding uinterface version bump.
 * Backward incompatible changes are done by bumping the version number in
 * the protocol and uinterface names and resetting the interface version.
 * Once the protocol is to be declared stable, the 'z' prefix and the
 * version number in the protocol and interface names are removed and the
 * interface version number is reset.
 */
extern const struct wl_interface zcr_keyboard_extension_v1_interface;
/**
 * @page page_iface_zcr_extended_keyboard_v1 zcr_extended_keyboard_v1
 * @section page_iface_zcr_extended_keyboard_v1_desc Description
 *
 * The zcr_extended_keyboard_v1 interface extends the wl_keyboard interface
 * with requests to notify whether sent key events are handled or not by
 * the client.
 * @section page_iface_zcr_extended_keyboard_v1_api API
 * See @ref iface_zcr_extended_keyboard_v1.
 */
/**
 * @defgroup iface_zcr_extended_keyboard_v1 The zcr_extended_keyboard_v1 interface
 *
 * The zcr_extended_keyboard_v1 interface extends the wl_keyboard interface
 * with requests to notify whether sent key events are handled or not by
 * the client.
 */
extern const struct wl_interface zcr_extended_keyboard_v1_interface;

#ifndef ZCR_KEYBOARD_EXTENSION_V1_ERROR_ENUM
#define ZCR_KEYBOARD_EXTENSION_V1_ERROR_ENUM
enum zcr_keyboard_extension_v1_error {
	/**
	 * the keyboard already has an extended_keyboard object associated
	 */
	ZCR_KEYBOARD_EXTENSION_V1_ERROR_EXTENDED_KEYBOARD_EXISTS = 0,
};
#endif /* ZCR_KEYBOARD_EXTENSION_V1_ERROR_ENUM */

#define ZCR_KEYBOARD_EXTENSION_V1_GET_EXTENDED_KEYBOARD 0


/**
 * @ingroup iface_zcr_keyboard_extension_v1
 */
#define ZCR_KEYBOARD_EXTENSION_V1_GET_EXTENDED_KEYBOARD_SINCE_VERSION 1

/** @ingroup iface_zcr_keyboard_extension_v1 */
static inline void
zcr_keyboard_extension_v1_set_user_data(struct zcr_keyboard_extension_v1 *zcr_keyboard_extension_v1, void *user_data)
{
	wl_proxy_set_user_data((struct wl_proxy *) zcr_keyboard_extension_v1, user_data);
}

/** @ingroup iface_zcr_keyboard_extension_v1 */
static inline void *
zcr_keyboard_extension_v1_get_user_data(struct zcr_keyboard_extension_v1 *zcr_keyboard_extension_v1)
{
	return wl_proxy_get_user_data((struct wl_proxy *) zcr_keyboard_extension_v1);
}

static inline uint32_t
zcr_keyboard_extension_v1_get_version(struct zcr_keyboard_extension_v1 *zcr_keyboard_extension_v1)
{
	return wl_proxy_get_version((struct wl_proxy *) zcr_keyboard_extension_v1);
}

/** @ingroup iface_zcr_keyboard_extension_v1 */
static inline void
zcr_keyboard_extension_v1_destroy(struct zcr_keyboard_extension_v1 *zcr_keyboard_extension_v1)
{
	wl_proxy_destroy((struct wl_proxy *) zcr_keyboard_extension_v1);
}

/**
 * @ingroup iface_zcr_keyboard_extension_v1
 *
 * Create extended_keyboard object.
 * See zcr_extended_keyboard interface for details.
 * If the given wl_keyboard object already has a extended_keyboard object
 * associated, the extended_keyboard_exists protocol error is raised.
 */
static inline struct zcr_extended_keyboard_v1 *
zcr_keyboard_extension_v1_get_extended_keyboard(struct zcr_keyboard_extension_v1 *zcr_keyboard_extension_v1, struct wl_keyboard *keyboard)
{
	struct wl_proxy *id;

	id = wl_proxy_marshal_constructor((struct wl_proxy *) zcr_keyboard_extension_v1,
			 ZCR_KEYBOARD_EXTENSION_V1_GET_EXTENDED_KEYBOARD, &zcr_extended_keyboard_v1_interface, NULL, keyboard);

	return (struct zcr_extended_keyboard_v1 *) id;
}

#ifndef ZCR_EXTENDED_KEYBOARD_V1_HANDLED_STATE_ENUM
#define ZCR_EXTENDED_KEYBOARD_V1_HANDLED_STATE_ENUM
/**
 * @ingroup iface_zcr_extended_keyboard_v1
 * whether a key event is handled by client or not
 */
enum zcr_extended_keyboard_v1_handled_state {
	ZCR_EXTENDED_KEYBOARD_V1_HANDLED_STATE_NOT_HANDLED = 0,
	ZCR_EXTENDED_KEYBOARD_V1_HANDLED_STATE_HANDLED = 1,
};
#endif /* ZCR_EXTENDED_KEYBOARD_V1_HANDLED_STATE_ENUM */

#define ZCR_EXTENDED_KEYBOARD_V1_DESTROY 0
#define ZCR_EXTENDED_KEYBOARD_V1_ACK_KEY 1


/**
 * @ingroup iface_zcr_extended_keyboard_v1
 */
#define ZCR_EXTENDED_KEYBOARD_V1_DESTROY_SINCE_VERSION 1
/**
 * @ingroup iface_zcr_extended_keyboard_v1
 */
#define ZCR_EXTENDED_KEYBOARD_V1_ACK_KEY_SINCE_VERSION 1

/** @ingroup iface_zcr_extended_keyboard_v1 */
static inline void
zcr_extended_keyboard_v1_set_user_data(struct zcr_extended_keyboard_v1 *zcr_extended_keyboard_v1, void *user_data)
{
	wl_proxy_set_user_data((struct wl_proxy *) zcr_extended_keyboard_v1, user_data);
}

/** @ingroup iface_zcr_extended_keyboard_v1 */
static inline void *
zcr_extended_keyboard_v1_get_user_data(struct zcr_extended_keyboard_v1 *zcr_extended_keyboard_v1)
{
	return wl_proxy_get_user_data((struct wl_proxy *) zcr_extended_keyboard_v1);
}

static inline uint32_t
zcr_extended_keyboard_v1_get_version(struct zcr_extended_keyboard_v1 *zcr_extended_keyboard_v1)
{
	return wl_proxy_get_version((struct wl_proxy *) zcr_extended_keyboard_v1);
}

/**
 * @ingroup iface_zcr_extended_keyboard_v1
 */
static inline void
zcr_extended_keyboard_v1_destroy(struct zcr_extended_keyboard_v1 *zcr_extended_keyboard_v1)
{
	wl_proxy_marshal((struct wl_proxy *) zcr_extended_keyboard_v1,
			 ZCR_EXTENDED_KEYBOARD_V1_DESTROY);

	wl_proxy_destroy((struct wl_proxy *) zcr_extended_keyboard_v1);
}

/**
 * @ingroup iface_zcr_extended_keyboard_v1
 */
static inline void
zcr_extended_keyboard_v1_ack_key(struct zcr_extended_keyboard_v1 *zcr_extended_keyboard_v1, uint32_t serial, uint32_t handled)
{
	wl_proxy_marshal((struct wl_proxy *) zcr_extended_keyboard_v1,
			 ZCR_EXTENDED_KEYBOARD_V1_ACK_KEY, serial, handled);
}

#ifdef  __cplusplus
}
#endif

#endif