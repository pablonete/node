// Copyright 2023 the V8 project authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "src/compiler/turboshaft/store-store-elimination-phase.h"

#include "src/compiler/turboshaft/store-store-elimination-reducer.h"

namespace v8::internal::compiler::turboshaft {

void StoreStoreEliminationPhase::Run(Zone* temp_zone) {
  turboshaft::OptimizationPhase<turboshaft::StoreStoreEliminationReducer>::Run(
      temp_zone);
}

}  // namespace v8::internal::compiler::turboshaft
