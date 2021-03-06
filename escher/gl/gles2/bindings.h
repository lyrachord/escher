// Copyright 2016 The Fuchsia Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#pragma once

#if defined(__APPLE__)
#include "TargetConditionals.h"

#if TARGET_OS_IPHONE
#include <OpenGLES/ES2/glext.h>
#else // TARGET_OS_IPHONE
#include <OpenGL/gl.h>
#include <OpenGL/glext.h>
#endif // TARGET_OS_IPHONE

#else // __APPLE__

#if !defined(GL_GLEXT_PROTOTYPES)
#define GL_GLEXT_PROTOTYPES 1
#endif

#include <GL/gl.h>
#include <GL/glext.h>

#endif // __APPLE
