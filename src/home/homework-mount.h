/* SPDX-License-Identifier: LGPL-2.1+ */
#pragma once

#include <stdbool.h>

int home_mount_node(const char *node, const char *fstype, bool discard);
int home_unshare_and_mount(const char *node, const char *fstype, bool discard);
int home_move_mount(const char *user_name_and_realm, const char *target);
