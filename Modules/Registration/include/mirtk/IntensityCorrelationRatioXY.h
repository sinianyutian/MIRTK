/*
 * Medical Image Registration ToolKit (MIRTK)
 *
 * Copyright 2016 Imperial College London
 * Copyright 2016 Andreas Schuh
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

#ifndef MIRTK_IntensityCorrelationRatioXY_H
#define MIRTK_IntensityCorrelationRatioXY_H

#include "mirtk/HistogramImageSimilarity.h"


namespace mirtk {


/**
 * Correlation ratio of target (X) and source (Y) image intensities
 */
class IntensityCorrelationRatioXY : public HistogramImageSimilarity
{
  mirtkEnergyTermMacro(IntensityCorrelationRatioXY, EM_CR_XY);

  // ---------------------------------------------------------------------------
  // Construction/Destruction
public:

  /// Constructor
  IntensityCorrelationRatioXY(const char * = "");

  /// Copy constructor
  IntensityCorrelationRatioXY(const IntensityCorrelationRatioXY &);

  /// Assignment operator
  IntensityCorrelationRatioXY &operator =(const IntensityCorrelationRatioXY &);

  /// Destructor
  ~IntensityCorrelationRatioXY();

  // ---------------------------------------------------------------------------
  // Evaluation
protected:

  /// Evaluate similarity of images
  virtual double Evaluate();

};


} // namespace mirtk

#endif // MIRTK_IntensityCorrelationRatioXY_H
