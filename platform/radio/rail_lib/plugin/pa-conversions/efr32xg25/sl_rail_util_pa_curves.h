/***************************************************************************//**
 * @file
 * @brief PA power conversion curves used by Silicon Labs PA power conversion
 *   functions.
 * @details This file contains the curves needed convert PA power levels to
 *   dBm powers.
 *******************************************************************************
 * # License
 * <b>Copyright 2020 Silicon Laboratories Inc. www.silabs.com</b>
 *******************************************************************************
 *
 * SPDX-License-Identifier: Zlib
 *
 * The licensor of this software is Silicon Laboratories Inc.
 *
 * This software is provided 'as-is', without any express or implied
 * warranty. In no event will the authors be held liable for any damages
 * arising from the use of this software.
 *
 * Permission is granted to anyone to use this software for any purpose,
 * including commercial applications, and to alter it and redistribute it
 * freely, subject to the following restrictions:
 *
 * 1. The origin of this software must not be misrepresented; you must not
 *    claim that you wrote the original software. If you use this software
 *    in a product, an acknowledgment in the product documentation would be
 *    appreciated but is not required.
 * 2. Altered source versions must be plainly marked as such, and must not be
 *    misrepresented as being the original software.
 * 3. This notice may not be removed or altered from any source distribution.
 *
 ******************************************************************************/

#ifndef __PA_CURVES_H_
#define __PA_CURVES_H_

#ifdef __cplusplus
extern "C" {
#endif

#define RAIL_PA_CURVES_PIECEWISE_SEGMENTS (9U)

// @TODO: RAIL_LIB-6968: These numbers will be updated with more accurate numbers from validation.

#define RAIL_PA_CURVES_MAX_POWER_HP      157
#define RAIL_PA_CURVES_MIN_POWER_HP      -165
#define RAIL_PA_CURVES_CURVES_HP                                                                           \
/* NOT a real power level, when set to 255 the first acts as an override for default max and step size. */ \
  { { 255, 150, 30 },                                                                                      \
    { 79, 794, -41545 },                                                                                   \
    { 51, 500, -7172 },                                                                                    \
    { 35, 381, 3027 },                                                                                     \
    { 25, 250, 10658 },                                                                                    \
    { 17, 173, 12705 },                                                                                    \
    { 12, 128, 12532 },                                                                                    \
    { 8, 86, 11101 },                                                                                      \
    { 5, 39, 7531 } }

#define RAIL_PA_CURVES_MAX_POWER_MP      68
#define RAIL_PA_CURVES_MIN_POWER_MP      -273
#define RAIL_PA_CURVES_CURVES_MP                                                                           \
/* NOT a real power level, when set to 255 the first acts as an override for default max and step size. */ \
  { { 255, 70, 30 },                                                                                       \
    { 79, 780, 24191 },                                                                                    \
    { 53, 497, 34645 },                                                                                    \
    { 38, 404, 35252 },                                                                                    \
    { 26, 257, 31942 },                                                                                    \
    { 18, 157, 26461 },                                                                                    \
    { 13, 127, 23854 },                                                                                    \
    { 9, 75, 17590 },                                                                                      \
    { 5, 44, 12562 } }

#define RAIL_PA_CURVES_MAX_POWER_LP      -25
#define RAIL_PA_CURVES_MIN_POWER_LP      -342
#define RAIL_PA_CURVES_CURVES_LP                                                                           \
/* NOT a real power level, when set to 255 the first acts as an override for default max and step size. */ \
  { { 255, -20, 30 },                                                                                      \
    { 79, 823, 97640 },                                                                                    \
    { 54, 496, 80371 },                                                                                    \
    { 37, 419, 73683 },                                                                                    \
    { 26, 248, 54323 },                                                                                    \
    { 18, 141, 38530 },                                                                                    \
    { 13, 127, 36031 },                                                                                    \
    { 9, 80, 26019 },                                                                                      \
    { 6, 54, 19620 } }

#define RAIL_PA_CURVES_MAX_POWER_LLP      -80
#define RAIL_PA_CURVES_MIN_POWER_LLP      -356
#define RAIL_PA_CURVES_CURVES_LLP                                                                          \
/* NOT a real power level, when set to 255 the first acts as an override for default max and step size. */ \
  { { 255, -80, 30 },                                                                                      \
    { 79, 795, 140598 },                                                                                   \
    { 52, 479, 105591 },                                                                                   \
    { 35, 403, 94379 },                                                                                    \
    { 26, 247, 67927 },                                                                                    \
    { 17, 140, 45984 },                                                                                    \
    { 16, 137, 45353 },                                                                                    \
    { 9, 82, 30654 },                                                                                      \
    { 4, 78, 29348 } }

#if RAIL_SUPPORTS_EFF
// @todo RAIL_LIB-7024 GET REAL FLARE POWER CURVES
#define RAIL_PA_CURVES_MAX_POWER_EFF_30DBM    283
#define RAIL_PA_CURVES_MIN_POWER_EFF_30DBM    3
#define RAIL_PA_CURVES_CURVES_EFF_30DBM                                                                    \
/* NOT a real power level, when set to 255 the first acts as an override for default max and step size. */ \
  { { 255, 280, 30 },                                                                                      \
    { 79, 1053, -223174 },                                                                                 \
    { 38, 501, -85868 },                                                                                   \
    { 25, 311, -43582 },                                                                                   \
    { 17, 155, -12886 },                                                                                   \
    { 6, 164, -13994 },                                                                                    \
    { 6, 119, -6465 },                                                                                     \
    { 6, 91, -3057 },                                                                                      \
    { 5, 44, 955 } }

#define RAIL_PA_CURVES_MAX_POWER_EFF_25DBM    255
#define RAIL_PA_CURVES_MIN_POWER_EFF_25DBM   -30
#define RAIL_PA_CURVES_CURVES_EFF_25DBM                                                                    \
/* NOT a real power level, when set to 255 the first acts as an override for default max and step size. */ \
  { { 255, 250, 30 },                                                                                      \
    { 79, 872, -141970 },                                                                                  \
    { 50, 510, -62158 },                                                                                   \
    { 31, 346, -32182 },                                                                                   \
    { 25, 270, -19660 },                                                                                   \
    { 22, 189, -7160 },                                                                                    \
    { 18, 160, -3300 },                                                                                    \
    { 17, 130, 518 },                                                                                      \
    { 6, 59, 3291 } }

#define RAIL_PA_CURVES_MAX_POWER_EFF_20DBM    240
#define RAIL_PA_CURVES_MIN_POWER_EFF_20DBM   -24
#define RAIL_PA_CURVES_CURVES_EFF_20DBM                                                                    \
/* NOT a real power level, when set to 255 the first acts as an override for default max and step size. */ \
  { { 255, 240, 30 },                                                                                      \
    { 79, 843, -125934 },                                                                                  \
    { 50, 497, -53405 },                                                                                   \
    { 32, 359, -29548 },                                                                                   \
    { 25, 266, -15428 },                                                                                   \
    { 17, 129, 1061 },                                                                                     \
    { 16, 136, 271 },                                                                                      \
    { 8, 71, 3908 },                                                                                       \
    { 8, 79, 3466 } }
#endif

#define RAIL_PA_CURVES_MAX_POWER_OFDM      180
#define RAIL_PA_CURVES_MIN_POWER_OFDM      -42
#define RAIL_PA_CURVES_CURVES_OFDM                                                                         \
/* NOT a real power level, when set to 255 the first acts as an override for default max and step size. */ \
  { { 255, 180, 30 },                                                                                      \
    { 204, 2239, -205088 },                                                                                \
    { 124, 1315, -68859 },                                                                                 \
    { 84, 856, -15199 },                                                                                   \
    { 58, 577, 8776 },                                                                                     \
    { 41, 405, 18477 },                                                                                    \
    { 29, 285, 21666 },                                                                                    \
    { 21, 200, 21343 },                                                                                    \
    { 15, 152, 19784 } }

#if RAIL_SUPPORTS_EFF
// @todo RAIL_LIB-7024 GET REAL FLARE POWER CURVES
#define RAIL_PA_CURVES_MAX_POWER_OFDM_EFF_30DBM   300
#define RAIL_PA_CURVES_MIN_POWER_OFDM_EFF_30DBM   74
#define RAIL_PA_CURVES_CURVES_OFDM_EFF_30DBM                                                               \
/* NOT a real power level, when set to 255 the first acts as an override for default max and step size. */ \
  { { 255, 300, 30 },                                                                                      \
    { 204, 2264, -478676 },                                                                                \
    { 126, 1330, -229060 },                                                                                \
    { 85, 868, -119735 },                                                                                  \
    { 59, 590, -62434 },                                                                                   \
    { 42, 405, -29701 },                                                                                   \
    { 29, 285, -12300 },                                                                                   \
    { 20, 200, -2514 },                                                                                    \
    { 15, 152, 1620 } }

#define RAIL_PA_CURVES_MAX_POWER_OFDM_EFF_25DBM   250
#define RAIL_PA_CURVES_MIN_POWER_OFDM_EFF_25DBM   13
#define RAIL_PA_CURVES_CURVES_OFDM_EFF_25DBM                                                               \
/* NOT a real power level, when set to 255 the first acts as an override for default max and step size. */ \
  { { 255, 250, 30 },                                                                                      \
    { 204, 1989, -297376 },                                                                                \
    { 134, 1316, -151292 },                                                                                \
    { 94, 900, -73817 },                                                                                   \
    { 67, 638, -32817 },                                                                                   \
    { 48, 460, -10330 },                                                                                   \
    { 34, 321, 3113 },                                                                                     \
    { 24, 233, 8841 },                                                                                     \
    { 18, 174, 11071 } }

#define RAIL_PA_CURVES_MAX_POWER_OFDM_EFF_20DBM   200
#define RAIL_PA_CURVES_MIN_POWER_OFDM_EFF_20DBM  -24
#define RAIL_PA_CURVES_CURVES_OFDM_EFF_20DBM                                                               \
/* NOT a real power level, when set to 255 the first acts as an override for default max and step size. */ \
  { { 255, 200, 30 },                                                                                      \
    { 204, 2158, -232902 },                                                                                \
    { 126, 1309, -91358 },                                                                                 \
    { 87, 871, -31573 },                                                                                   \
    { 61, 601, -2716 },                                                                                    \
    { 43, 418, 11215 },                                                                                    \
    { 31, 300, 16738 },                                                                                    \
    { 22, 211, 18236 },                                                                                    \
    { 16, 162, 17672 } }

#define RAIL_PA_CURVES_MAX_POWER_OFDM_EFF_MAXDBM   300
#define RAIL_PA_CURVES_MIN_POWER_OFDM_EFF_MAXDBM   74
#define RAIL_PA_CURVES_CURVES_OFDM_EFF_MAXDBM                                                              \
/* NOT a real power level, when set to 255 the first acts as an override for default max and step size. */ \
  { { 255, 300, 30 },                                                                                      \
    { 204, 2264, -478676 },                                                                                \
    { 126, 1330, -229060 },                                                                                \
    { 85, 868, -119735 },                                                                                  \
    { 59, 590, -62434 },                                                                                   \
    { 42, 405, -29701 },                                                                                   \
    { 29, 285, -12300 },                                                                                   \
    { 20, 200, -2514 },                                                                                    \
    { 15, 152, 1620 } }
#endif

// *INDENT-OFF*
// Macro to declare the variables needed to initialize RAIL_TxPowerCurvesConfig_t for use in
// RAIL_InitTxPowerCurves, assuming battery powered operation
#if RAIL_SUPPORTS_EFF
#define RAIL_DECLARE_TX_POWER_VBAT_CURVES_ALT                           \
  static const RAIL_TxPowerCurveAlt_t RAIL_piecewiseDataHP = {          \
    RAIL_PA_CURVES_MAX_POWER_HP,                                        \
    RAIL_PA_CURVES_MIN_POWER_HP,                                        \
    RAIL_PA_CURVES_CURVES_HP,                                           \
  };                                                                    \
  static const RAIL_TxPowerCurveAlt_t RAIL_piecewiseDataMP = {          \
    RAIL_PA_CURVES_MAX_POWER_MP,                                        \
    RAIL_PA_CURVES_MIN_POWER_MP,                                        \
    RAIL_PA_CURVES_CURVES_MP,                                           \
  };                                                                    \
  static const RAIL_TxPowerCurveAlt_t RAIL_piecewiseDataLP = {          \
    RAIL_PA_CURVES_MAX_POWER_LP,                                        \
    RAIL_PA_CURVES_MIN_POWER_LP,                                        \
    RAIL_PA_CURVES_CURVES_LP,                                           \
  };                                                                    \
 static const RAIL_TxPowerCurveAlt_t RAIL_piecewiseDataLLP = {          \
    RAIL_PA_CURVES_MAX_POWER_LLP,                                       \
    RAIL_PA_CURVES_MIN_POWER_LLP,                                       \
    RAIL_PA_CURVES_CURVES_LLP,                                          \
  };                                                                    \
 static const RAIL_TxPowerCurveAlt_t RAIL_piecewiseDataEFF30Dbm = {     \
    RAIL_PA_CURVES_MAX_POWER_EFF_30DBM,                                 \
    RAIL_PA_CURVES_MIN_POWER_EFF_30DBM,                                 \
    RAIL_PA_CURVES_CURVES_EFF_30DBM,                                    \
  };                                                                    \
 static const RAIL_TxPowerCurveAlt_t RAIL_piecewiseDataEFF25Dbm = {     \
    RAIL_PA_CURVES_MAX_POWER_EFF_25DBM,                                 \
    RAIL_PA_CURVES_MIN_POWER_EFF_25DBM,                                 \
    RAIL_PA_CURVES_CURVES_EFF_25DBM,                                    \
  };                                                                    \
 static const RAIL_TxPowerCurveAlt_t RAIL_piecewiseDataEFF20Dbm = {     \
    RAIL_PA_CURVES_MAX_POWER_EFF_20DBM,                                 \
    RAIL_PA_CURVES_MIN_POWER_EFF_20DBM,                                 \
    RAIL_PA_CURVES_CURVES_EFF_20DBM,                                    \
  };                                                                    \
 static const RAIL_TxPowerCurveAlt_t RAIL_piecewiseDataOFDM = {         \
    RAIL_PA_CURVES_MAX_POWER_OFDM,                                      \
    RAIL_PA_CURVES_MIN_POWER_OFDM,                                      \
    RAIL_PA_CURVES_CURVES_OFDM,                                         \
  };                                                                    \
 static const RAIL_TxPowerCurveAlt_t RAIL_piecewiseDataOFDMEFF30Dbm = { \
    RAIL_PA_CURVES_MAX_POWER_OFDM_EFF_30DBM,                            \
    RAIL_PA_CURVES_MIN_POWER_OFDM_EFF_30DBM,                            \
    RAIL_PA_CURVES_CURVES_OFDM_EFF_30DBM,                               \
  };                                                                    \
 static const RAIL_TxPowerCurveAlt_t RAIL_piecewiseDataOFDMEFF25Dbm = { \
    RAIL_PA_CURVES_MAX_POWER_OFDM_EFF_25DBM,                            \
    RAIL_PA_CURVES_MIN_POWER_OFDM_EFF_25DBM,                            \
    RAIL_PA_CURVES_CURVES_OFDM_EFF_25DBM,                               \
  };                                                                    \
 static const RAIL_TxPowerCurveAlt_t RAIL_piecewiseDataOFDMEFF20Dbm = { \
    RAIL_PA_CURVES_MAX_POWER_OFDM_EFF_20DBM,                            \
    RAIL_PA_CURVES_MIN_POWER_OFDM_EFF_20DBM,                            \
    RAIL_PA_CURVES_CURVES_OFDM_EFF_20DBM,                               \
  };                                                                    \
  static const RAIL_TxPowerCurveAlt_t RAIL_piecewiseDataOFDMEFFMaxDbm = { \
    RAIL_PA_CURVES_MAX_POWER_OFDM_EFF_MAXDBM,                            \
    RAIL_PA_CURVES_MIN_POWER_OFDM_EFF_MAXDBM,                            \
    RAIL_PA_CURVES_CURVES_OFDM_EFF_MAXDBM,                               \
  };
#else
  static const RAIL_TxPowerCurveAlt_t RAIL_piecewiseDataHP = {          \
    RAIL_PA_CURVES_MAX_POWER_HP,                                        \
    RAIL_PA_CURVES_MIN_POWER_HP,                                        \
    RAIL_PA_CURVES_CURVES_HP,                                           \
  };                                                                    \
  static const RAIL_TxPowerCurveAlt_t RAIL_piecewiseDataMP = {          \
    RAIL_PA_CURVES_MAX_POWER_MP,                                        \
    RAIL_PA_CURVES_MIN_POWER_MP,                                        \
    RAIL_PA_CURVES_CURVES_MP,                                           \
  };                                                                    \
  static const RAIL_TxPowerCurveAlt_t RAIL_piecewiseDataLP = {          \
    RAIL_PA_CURVES_MAX_POWER_LP,                                        \
    RAIL_PA_CURVES_MIN_POWER_LP,                                        \
    RAIL_PA_CURVES_CURVES_LP,                                           \
  };                                                                    \
 static const RAIL_TxPowerCurveAlt_t RAIL_piecewiseDataLLP = {          \
    RAIL_PA_CURVES_MAX_POWER_LLP,                                       \
    RAIL_PA_CURVES_MIN_POWER_LLP,                                       \
    RAIL_PA_CURVES_CURVES_LLP,                                          \
  };                                                                    \
 static const RAIL_TxPowerCurveAlt_t RAIL_piecewiseDataOFDM = {         \
    RAIL_PA_CURVES_MAX_POWER_OFDM,                                      \
    RAIL_PA_CURVES_MIN_POWER_OFDM,                                      \
    RAIL_PA_CURVES_CURVES_OFDM,                                         \
  };
#endif
// *INDENT-OFF*

// *INDENT-OFF*
// Macro to declare the variables needed to initialize RAIL_TxPowerCurvesConfig_t for use in
// RAIL_InitTxPowerCurves, assuming battery powered operation
#if RAIL_SUPPORTS_EFF
#define RAIL_DECLARE_TX_POWER_CURVES_CONFIG_ALT                                \
  {                                                                            \
    .curves = {                                                                \
      {                                                                        \
        .algorithm = RAIL_PA_ALGORITHM_PIECEWISE_LINEAR,                       \
        .segments = RAIL_PA_CURVES_PIECEWISE_SEGMENTS,                         \
        .min = RAIL_TX_POWER_LEVEL_SUBGIG_HP_MIN,                              \
        .max = RAIL_TX_POWER_LEVEL_SUBGIG_HP_MAX,                              \
        .conversion = { .powerCurve = &RAIL_piecewiseDataHP },                 \
      },                                                                       \
      {                                                                        \
        .algorithm = RAIL_PA_ALGORITHM_PIECEWISE_LINEAR,                       \
        .segments = RAIL_PA_CURVES_PIECEWISE_SEGMENTS,                         \
        .min = RAIL_TX_POWER_LEVEL_SUBGIG_MP_MIN,                              \
        .max = RAIL_TX_POWER_LEVEL_SUBGIG_MP_MAX,                              \
        .conversion = { .powerCurve = &RAIL_piecewiseDataMP },                 \
      },                                                                       \
      {                                                                        \
        .algorithm = RAIL_PA_ALGORITHM_PIECEWISE_LINEAR,                       \
        .segments = RAIL_PA_CURVES_PIECEWISE_SEGMENTS,                         \
        .min = RAIL_TX_POWER_LEVEL_SUBGIG_LP_MIN,                              \
        .max = RAIL_TX_POWER_LEVEL_SUBGIG_LP_MAX,                              \
        .conversion = { .powerCurve = &RAIL_piecewiseDataLP },                 \
      },                                                                       \
      {                                                                        \
        .algorithm = RAIL_PA_ALGORITHM_PIECEWISE_LINEAR,                       \
        .segments = RAIL_PA_CURVES_PIECEWISE_SEGMENTS,                         \
        .min = RAIL_TX_POWER_LEVEL_SUBGIG_LLP_MIN,                             \
        .max = RAIL_TX_POWER_LEVEL_SUBGIG_LLP_MAX,                             \
        .conversion = { .powerCurve = &RAIL_piecewiseDataLLP },                \
      },                                                                       \
      { /* Dummy power settings for RAIL_TX_POWER_MODE_SUBGIG_HIGHEST */       \
        .algorithm = RAIL_PA_ALGORITHM_PIECEWISE_LINEAR,                       \
        .segments = RAIL_PA_CURVES_PIECEWISE_SEGMENTS,                         \
        .min = RAIL_TX_POWER_LEVEL_SUBGIG_HP_MIN,                              \
        .max = RAIL_TX_POWER_LEVEL_SUBGIG_HP_MAX,                              \
        .conversion = { .powerCurve = &RAIL_piecewiseDataHP },                 \
      },                                                                       \
      {                                                                        \
        .algorithm = RAIL_PA_ALGORITHM_PIECEWISE_LINEAR,                       \
        .segments = RAIL_PA_CURVES_PIECEWISE_SEGMENTS,                         \
        .min = RAIL_TX_POWER_LEVEL_OFDM_PA_MIN,                                \
        .max = RAIL_TX_POWER_LEVEL_OFDM_PA_MAX,                                \
        .conversion = { .powerCurve = &RAIL_piecewiseDataOFDM },               \
      },                                                                       \
      {                                                                        \
        .algorithm = RAIL_PA_ALGORITHM_PIECEWISE_LINEAR,                       \
        .segments = RAIL_PA_CURVES_PIECEWISE_SEGMENTS,                         \
        .min = RAIL_TX_POWER_LEVEL_SUBGIG_EFF_30DBM_MIN,                       \
        .max = RAIL_TX_POWER_LEVEL_SUBGIG_EFF_30DBM_MAX,                       \
        .conversion = { .powerCurve = &RAIL_piecewiseDataEFF30Dbm },           \
      },                                                                       \
      {                                                                        \
        .algorithm = RAIL_PA_ALGORITHM_PIECEWISE_LINEAR,                       \
        .segments = RAIL_PA_CURVES_PIECEWISE_SEGMENTS,                         \
        .min = RAIL_TX_POWER_LEVEL_SUBGIG_EFF_25DBM_MIN,                       \
        .max = RAIL_TX_POWER_LEVEL_SUBGIG_EFF_25DBM_MAX,                       \
        .conversion = { .powerCurve = &RAIL_piecewiseDataEFF25Dbm },           \
      },                                                                       \
      {                                                                        \
        .algorithm = RAIL_PA_ALGORITHM_PIECEWISE_LINEAR,                       \
        .segments = RAIL_PA_CURVES_PIECEWISE_SEGMENTS,                         \
        .min = RAIL_TX_POWER_LEVEL_SUBGIG_EFF_20DBM_MIN,                       \
        .max = RAIL_TX_POWER_LEVEL_SUBGIG_EFF_20DBM_MAX,                       \
        .conversion = { .powerCurve = &RAIL_piecewiseDataEFF20Dbm },           \
      },                                                                       \
      {                                                                        \
        .algorithm = RAIL_PA_ALGORITHM_PIECEWISE_LINEAR,                       \
        .segments = RAIL_PA_CURVES_PIECEWISE_SEGMENTS,                         \
        .min = RAIL_TX_POWER_LEVEL_OFDM_PA_EFF_30DBM_MIN,                      \
        .max = RAIL_TX_POWER_LEVEL_OFDM_PA_EFF_30DBM_MAX,                      \
        .conversion = { .powerCurve = &RAIL_piecewiseDataOFDMEFF30Dbm },       \
      },                                                                       \
      {                                                                        \
        .algorithm = RAIL_PA_ALGORITHM_PIECEWISE_LINEAR,                       \
        .segments = RAIL_PA_CURVES_PIECEWISE_SEGMENTS,                         \
        .min = RAIL_TX_POWER_LEVEL_OFDM_PA_EFF_25DBM_MIN,                      \
        .max = RAIL_TX_POWER_LEVEL_OFDM_PA_EFF_25DBM_MAX,                      \
        .conversion = { .powerCurve = &RAIL_piecewiseDataOFDMEFF25Dbm },       \
      },                                                                       \
      {                                                                        \
        .algorithm = RAIL_PA_ALGORITHM_PIECEWISE_LINEAR,                       \
        .segments = RAIL_PA_CURVES_PIECEWISE_SEGMENTS,                         \
        .min = RAIL_TX_POWER_LEVEL_OFDM_PA_EFF_20DBM_MIN,                      \
        .max = RAIL_TX_POWER_LEVEL_OFDM_PA_EFF_20DBM_MAX,                      \
        .conversion = { .powerCurve = &RAIL_piecewiseDataOFDMEFF20Dbm },       \
      },                                                                       \
      {                                                                        \
        .algorithm = RAIL_PA_ALGORITHM_PIECEWISE_LINEAR,                       \
        .segments = RAIL_PA_CURVES_PIECEWISE_SEGMENTS,                         \
        .min = RAIL_TX_POWER_LEVEL_OFDM_PA_EFF_MAXDBM_MIN,                     \
        .max = RAIL_TX_POWER_LEVEL_OFDM_PA_EFF_MAXDBM_MAX,                     \
        .conversion = { .powerCurve = &RAIL_piecewiseDataOFDMEFFMaxDbm },      \
      },                                                                       \
    }                                                                          \
  }
#else
#define RAIL_DECLARE_TX_POWER_CURVES_CONFIG_ALT                                \
  {                                                                            \
    .curves = {                                                                \
      {                                                                        \
        .algorithm = RAIL_PA_ALGORITHM_PIECEWISE_LINEAR,                       \
        .segments = RAIL_PA_CURVES_PIECEWISE_SEGMENTS,                         \
        .min = RAIL_TX_POWER_LEVEL_SUBGIG_HP_MIN,                              \
        .max = RAIL_TX_POWER_LEVEL_SUBGIG_HP_MAX,                              \
        .conversion = { .powerCurve = &RAIL_piecewiseDataHP },                 \
      },                                                                       \
      {                                                                        \
        .algorithm = RAIL_PA_ALGORITHM_PIECEWISE_LINEAR,                       \
        .segments = RAIL_PA_CURVES_PIECEWISE_SEGMENTS,                         \
        .min = RAIL_TX_POWER_LEVEL_SUBGIG_MP_MIN,                              \
        .max = RAIL_TX_POWER_LEVEL_SUBGIG_MP_MAX,                              \
        .conversion = { .powerCurve = &RAIL_piecewiseDataMP },                 \
      },                                                                       \
      {                                                                        \
        .algorithm = RAIL_PA_ALGORITHM_PIECEWISE_LINEAR,                       \
        .segments = RAIL_PA_CURVES_PIECEWISE_SEGMENTS,                         \
        .min = RAIL_TX_POWER_LEVEL_SUBGIG_LP_MIN,                              \
        .max = RAIL_TX_POWER_LEVEL_SUBGIG_LP_MAX,                              \
        .conversion = { .powerCurve = &RAIL_piecewiseDataLP },                 \
      },                                                                       \
      {                                                                        \
        .algorithm = RAIL_PA_ALGORITHM_PIECEWISE_LINEAR,                       \
        .segments = RAIL_PA_CURVES_PIECEWISE_SEGMENTS,                         \
        .min = RAIL_TX_POWER_LEVEL_SUBGIG_LLP_MIN,                             \
        .max = RAIL_TX_POWER_LEVEL_SUBGIG_LLP_MAX,                             \
        .conversion = { .powerCurve = &RAIL_piecewiseDataLLP },                \
      },                                                                       \
      { /* Dummy power settings for RAIL_TX_POWER_MODE_SUBGIG_HIGHEST */       \
        .algorithm = RAIL_PA_ALGORITHM_PIECEWISE_LINEAR,                       \
        .segments = RAIL_PA_CURVES_PIECEWISE_SEGMENTS,                         \
        .min = RAIL_TX_POWER_LEVEL_SUBGIG_HP_MIN,                              \
        .max = RAIL_TX_POWER_LEVEL_SUBGIG_HP_MAX,                              \
        .conversion = { .powerCurve = &RAIL_piecewiseDataHP },                 \
      },                                                                       \
      {                                                                        \
        .algorithm = RAIL_PA_ALGORITHM_PIECEWISE_LINEAR,                       \
        .segments = RAIL_PA_CURVES_PIECEWISE_SEGMENTS,                         \
        .min = RAIL_TX_POWER_LEVEL_OFDM_PA_MIN,                                \
        .max = RAIL_TX_POWER_LEVEL_OFDM_PA_MAX,                                \
        .conversion = { .powerCurve = &RAIL_piecewiseDataOFDM },               \
      },                                                                       \
    }                                                                          \
  }
#endif
// *INDENT-OFF*

#ifdef __cplusplus
}
#endif

#endif
