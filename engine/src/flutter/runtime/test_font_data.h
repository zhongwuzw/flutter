// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef FLUTTER_RUNTIME_TEST_FONT_DATA_H_
#define FLUTTER_RUNTIME_TEST_FONT_DATA_H_

#include <memory>
#include "third_party/skia/include/core/SkStream.h"

namespace blink {

std::unique_ptr<SkStreamAsset> GetTestFontData();

}  // namespace blink

#endif  // FLUTTER_RUNTIME_TEST_FONT_DATA_H_
