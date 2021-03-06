/*
 * Medical Image Registration ToolKit (MIRTK)
 *
 * Copyright 2016-2017 Imperial College London
 * Copyright 2016-2017 Andreas Schuh
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "mirtk/JointImageEntropy.h"

#include "mirtk/ObjectFactory.h"


namespace mirtk {


// Register energy term with object factory during static initialization
mirtkAutoRegisterEnergyTermMacro(JointImageEntropy);


// =============================================================================
// Construction/Destruction
// =============================================================================

// -----------------------------------------------------------------------------
JointImageEntropy::JointImageEntropy(const char *name)
:
  HistogramImageSimilarity(name)
{
}

// -----------------------------------------------------------------------------
JointImageEntropy::JointImageEntropy(const JointImageEntropy &other)
:
  HistogramImageSimilarity(other)
{
}

// -----------------------------------------------------------------------------
JointImageEntropy::~JointImageEntropy()
{
}

// =============================================================================
// Evaluation
// =============================================================================

// -----------------------------------------------------------------------------
double JointImageEntropy::Evaluate()
{
  return -_Histogram.JointEntropy();
}

// -----------------------------------------------------------------------------
double JointImageEntropy::RawValue(double value) const
{
  return -HistogramImageSimilarity::RawValue(value);
}


} // namespace mirtk
