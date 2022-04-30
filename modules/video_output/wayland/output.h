/*****************************************************************************
 * Copyright © 2018 Rémi Denis-Courmont
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; either version 2.1 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston MA 02110-1301, USA.
 *****************************************************************************/

#include <stdint.h>

struct vout_window_t;
struct wl_registry;
struct output_list;

struct output_list *output_list_create(struct vout_window_t *wnd);
void output_list_destroy(struct output_list *);

struct wl_output *output_create(struct output_list *, struct wl_registry *,
                                uint32_t id, uint32_t version);
struct wl_output *output_find_by_id(struct output_list *, uint32_t id);
void output_destroy(struct output_list *, struct wl_output *);
