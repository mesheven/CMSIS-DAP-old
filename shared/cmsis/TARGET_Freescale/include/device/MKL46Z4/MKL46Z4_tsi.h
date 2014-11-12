/*
 * Copyright (c) 2014, Freescale Semiconductor, Inc.
 * All rights reserved.
 *
 * THIS SOFTWARE IS PROVIDED BY FREESCALE "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT
 * SHALL FREESCALE BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT
 * OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING
 * IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY
 * OF SUCH DAMAGE.
 */
/*
 * WARNING! DO NOT EDIT THIS FILE DIRECTLY!
 *
 * This file was generated automatically and any changes may be lost.
 */
#ifndef __HW_TSI_REGISTERS_H__
#define __HW_TSI_REGISTERS_H__

#include "regs.h"

/*
 * MKL46Z4 TSI
 *
 * Touch sense input
 *
 * Registers defined in this header file:
 * - HW_TSI_GENCS - TSI General Control and Status Register
 * - HW_TSI_DATA - TSI DATA Register
 * - HW_TSI_TSHD - TSI Threshold Register
 *
 * - hw_tsi_t - Struct containing all module registers.
 */

//! @name Module base addresses
//@{
#ifndef REGS_TSI_BASE
#define HW_TSI_INSTANCE_COUNT (1U) //!< Number of instances of the TSI module.
#define REGS_TSI_BASE (0x40045000U) //!< Base address for TSI0.
#endif
//@}

//-------------------------------------------------------------------------------------------
// HW_TSI_GENCS - TSI General Control and Status Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_TSI_GENCS - TSI General Control and Status Register (RW)
 *
 * Reset value: 0x00000000U
 *
 * This control register provides various control and configuration information
 * for the TSI module. When TSI is working, the configuration bits (GENCS[TSIEN],
 * GENCS[TSIIEN], and GENCS[STM]) must not be changed. The EOSF flag is kept
 * until the software acknowledge it.
 */
typedef union _hw_tsi_gencs
{
    uint32_t U;
    struct _hw_tsi_gencs_bitfields
    {
        uint32_t RESERVED0 : 1;        //!< [0]
        uint32_t CURSW : 1;            //!< [1] CURSW
        uint32_t EOSF : 1;             //!< [2] End of Scan Flag
        uint32_t SCNIP : 1;            //!< [3] Scan In Progress Status
        uint32_t STM : 1;              //!< [4] Scan Trigger Mode
        uint32_t STPE : 1;             //!< [5] TSI STOP Enable
        uint32_t TSIIEN : 1;           //!< [6] Touch Sensing Input Interrupt Enable
        uint32_t TSIEN : 1;            //!< [7] Touch Sensing Input Module Enable
        uint32_t NSCN : 5;             //!< [12:8] NSCN
        uint32_t PS : 3;               //!< [15:13] PS
        uint32_t EXTCHRG : 3;          //!< [18:16] EXTCHRG
        uint32_t DVOLT : 2;            //!< [20:19] DVOLT
        uint32_t REFCHRG : 3;          //!< [23:21] REFCHRG
        uint32_t MODE : 4;             //!< [27:24] TSI analog modes setup and status
                                       //! bits.
        uint32_t ESOR : 1;             //!< [28] End-of-scan or Out-of-Range Interrupt
                                       //! Selection
        uint32_t RESERVED1 : 2;        //!< [30:29]
        uint32_t OUTRGF : 1;           //!< [31] Out of Range Flag.
    } B;
} hw_tsi_gencs_t;
#endif

/*!
 * @name Constants and macros for entire TSI_GENCS register
 */
//@{
#define HW_TSI_GENCS_ADDR        (REGS_TSI_BASE + 0x0U)

#ifndef __LANGUAGE_ASM__
#define HW_TSI_GENCS             (*(__IO hw_tsi_gencs_t *) HW_TSI_GENCS_ADDR)
#define HW_TSI_GENCS_RD()        (HW_TSI_GENCS.U)
#define HW_TSI_GENCS_WR(v)       (HW_TSI_GENCS.U = (v))
#define HW_TSI_GENCS_SET(v)      (BME_OR32(HW_TSI_GENCS_ADDR, (uint32_t)(v)))
#define HW_TSI_GENCS_CLR(v)      (BME_AND32(HW_TSI_GENCS_ADDR, (uint32_t)(~(v))))
#define HW_TSI_GENCS_TOG(v)      (BME_XOR32(HW_TSI_GENCS_ADDR, (uint32_t)(v)))
#endif
//@}

/*
 * Constants & macros for individual TSI_GENCS bitfields
 */

/*!
 * @name Register TSI_GENCS, field CURSW[1] (RW)
 *
 * This bit specifies if the current sources of electrode oscillator and
 * reference oscillator are swapped.
 *
 * Values:
 * - 0 - The current source pair are not swapped.
 * - 1 - The current source pair are swapped.
 */
//@{
#define BP_TSI_GENCS_CURSW   (1U)          //!< Bit position for TSI_GENCS_CURSW.
#define BM_TSI_GENCS_CURSW   (0x00000002U) //!< Bit mask for TSI_GENCS_CURSW.
#define BS_TSI_GENCS_CURSW   (1U)          //!< Bit field size in bits for TSI_GENCS_CURSW.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the TSI_GENCS_CURSW field.
#define BR_TSI_GENCS_CURSW   (BME_UBFX32(HW_TSI_GENCS_ADDR, BP_TSI_GENCS_CURSW, BS_TSI_GENCS_CURSW))
#endif

//! @brief Format value for bitfield TSI_GENCS_CURSW.
#define BF_TSI_GENCS_CURSW(v) (__REG_VALUE_TYPE((__REG_VALUE_TYPE((v), uint32_t) << BP_TSI_GENCS_CURSW), uint32_t) & BM_TSI_GENCS_CURSW)

#ifndef __LANGUAGE_ASM__
//! @brief Set the CURSW field to a new value.
#define BW_TSI_GENCS_CURSW(v) (BME_BFI32(HW_TSI_GENCS_ADDR, ((uint32_t)(v) << BP_TSI_GENCS_CURSW), BP_TSI_GENCS_CURSW, 1))
#endif
//@}

/*!
 * @name Register TSI_GENCS, field EOSF[2] (W1C)
 *
 * This flag is set when all active electrodes are finished scanning after a
 * scan trigger. Write "1" , when this flag is set, to clear it.
 *
 * Values:
 * - 0 - Scan not complete.
 * - 1 - Scan complete.
 */
//@{
#define BP_TSI_GENCS_EOSF    (2U)          //!< Bit position for TSI_GENCS_EOSF.
#define BM_TSI_GENCS_EOSF    (0x00000004U) //!< Bit mask for TSI_GENCS_EOSF.
#define BS_TSI_GENCS_EOSF    (1U)          //!< Bit field size in bits for TSI_GENCS_EOSF.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the TSI_GENCS_EOSF field.
#define BR_TSI_GENCS_EOSF    (BME_UBFX32(HW_TSI_GENCS_ADDR, BP_TSI_GENCS_EOSF, BS_TSI_GENCS_EOSF))
#endif

//! @brief Format value for bitfield TSI_GENCS_EOSF.
#define BF_TSI_GENCS_EOSF(v) (__REG_VALUE_TYPE((__REG_VALUE_TYPE((v), uint32_t) << BP_TSI_GENCS_EOSF), uint32_t) & BM_TSI_GENCS_EOSF)

#ifndef __LANGUAGE_ASM__
//! @brief Set the EOSF field to a new value.
#define BW_TSI_GENCS_EOSF(v) (BME_BFI32(HW_TSI_GENCS_ADDR, ((uint32_t)(v) << BP_TSI_GENCS_EOSF), BP_TSI_GENCS_EOSF, 1))
#endif
//@}

/*!
 * @name Register TSI_GENCS, field SCNIP[3] (RO)
 *
 * This read-only bit indicates if scan is in progress. This bit will get
 * asserted after the analog bias circuit is stable after a trigger and it changes
 * automatically by the TSI.
 *
 * Values:
 * - 0 - No scan in progress.
 * - 1 - Scan in progress.
 */
//@{
#define BP_TSI_GENCS_SCNIP   (3U)          //!< Bit position for TSI_GENCS_SCNIP.
#define BM_TSI_GENCS_SCNIP   (0x00000008U) //!< Bit mask for TSI_GENCS_SCNIP.
#define BS_TSI_GENCS_SCNIP   (1U)          //!< Bit field size in bits for TSI_GENCS_SCNIP.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the TSI_GENCS_SCNIP field.
#define BR_TSI_GENCS_SCNIP   (BME_UBFX32(HW_TSI_GENCS_ADDR, BP_TSI_GENCS_SCNIP, BS_TSI_GENCS_SCNIP))
#endif
//@}

/*!
 * @name Register TSI_GENCS, field STM[4] (RW)
 *
 * This bit specifies the trigger mode. User is allowed to change this bit when
 * TSI is not working in progress.
 *
 * Values:
 * - 0 - Software trigger scan.
 * - 1 - Hardware trigger scan.
 */
//@{
#define BP_TSI_GENCS_STM     (4U)          //!< Bit position for TSI_GENCS_STM.
#define BM_TSI_GENCS_STM     (0x00000010U) //!< Bit mask for TSI_GENCS_STM.
#define BS_TSI_GENCS_STM     (1U)          //!< Bit field size in bits for TSI_GENCS_STM.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the TSI_GENCS_STM field.
#define BR_TSI_GENCS_STM     (BME_UBFX32(HW_TSI_GENCS_ADDR, BP_TSI_GENCS_STM, BS_TSI_GENCS_STM))
#endif

//! @brief Format value for bitfield TSI_GENCS_STM.
#define BF_TSI_GENCS_STM(v)  (__REG_VALUE_TYPE((__REG_VALUE_TYPE((v), uint32_t) << BP_TSI_GENCS_STM), uint32_t) & BM_TSI_GENCS_STM)

#ifndef __LANGUAGE_ASM__
//! @brief Set the STM field to a new value.
#define BW_TSI_GENCS_STM(v)  (BME_BFI32(HW_TSI_GENCS_ADDR, ((uint32_t)(v) << BP_TSI_GENCS_STM), BP_TSI_GENCS_STM, 1))
#endif
//@}

/*!
 * @name Register TSI_GENCS, field STPE[5] (RW)
 *
 * This bit enables TSI module function in low power modes (stop, VLPS, LLS and
 * VLLS{3,2,1}).
 *
 * Values:
 * - 0 - TSI is disabled when MCU goes into low power mode.
 * - 1 - Allows TSI to continue running in all low power modes.
 */
//@{
#define BP_TSI_GENCS_STPE    (5U)          //!< Bit position for TSI_GENCS_STPE.
#define BM_TSI_GENCS_STPE    (0x00000020U) //!< Bit mask for TSI_GENCS_STPE.
#define BS_TSI_GENCS_STPE    (1U)          //!< Bit field size in bits for TSI_GENCS_STPE.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the TSI_GENCS_STPE field.
#define BR_TSI_GENCS_STPE    (BME_UBFX32(HW_TSI_GENCS_ADDR, BP_TSI_GENCS_STPE, BS_TSI_GENCS_STPE))
#endif

//! @brief Format value for bitfield TSI_GENCS_STPE.
#define BF_TSI_GENCS_STPE(v) (__REG_VALUE_TYPE((__REG_VALUE_TYPE((v), uint32_t) << BP_TSI_GENCS_STPE), uint32_t) & BM_TSI_GENCS_STPE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the STPE field to a new value.
#define BW_TSI_GENCS_STPE(v) (BME_BFI32(HW_TSI_GENCS_ADDR, ((uint32_t)(v) << BP_TSI_GENCS_STPE), BP_TSI_GENCS_STPE, 1))
#endif
//@}

/*!
 * @name Register TSI_GENCS, field TSIIEN[6] (RW)
 *
 * This bit enables TSI module interrupt request to CPU when the scan completes.
 * The interrupt will wake MCU from low power mode if this interrupt is enabled.
 *
 * Values:
 * - 0 - TSI interrupt is disabled.
 * - 1 - TSI interrupt is enabled.
 */
//@{
#define BP_TSI_GENCS_TSIIEN  (6U)          //!< Bit position for TSI_GENCS_TSIIEN.
#define BM_TSI_GENCS_TSIIEN  (0x00000040U) //!< Bit mask for TSI_GENCS_TSIIEN.
#define BS_TSI_GENCS_TSIIEN  (1U)          //!< Bit field size in bits for TSI_GENCS_TSIIEN.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the TSI_GENCS_TSIIEN field.
#define BR_TSI_GENCS_TSIIEN  (BME_UBFX32(HW_TSI_GENCS_ADDR, BP_TSI_GENCS_TSIIEN, BS_TSI_GENCS_TSIIEN))
#endif

//! @brief Format value for bitfield TSI_GENCS_TSIIEN.
#define BF_TSI_GENCS_TSIIEN(v) (__REG_VALUE_TYPE((__REG_VALUE_TYPE((v), uint32_t) << BP_TSI_GENCS_TSIIEN), uint32_t) & BM_TSI_GENCS_TSIIEN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TSIIEN field to a new value.
#define BW_TSI_GENCS_TSIIEN(v) (BME_BFI32(HW_TSI_GENCS_ADDR, ((uint32_t)(v) << BP_TSI_GENCS_TSIIEN), BP_TSI_GENCS_TSIIEN, 1))
#endif
//@}

/*!
 * @name Register TSI_GENCS, field TSIEN[7] (RW)
 *
 * This bit enables TSI module.
 *
 * Values:
 * - 0 - TSI module disabled.
 * - 1 - TSI module enabled.
 */
//@{
#define BP_TSI_GENCS_TSIEN   (7U)          //!< Bit position for TSI_GENCS_TSIEN.
#define BM_TSI_GENCS_TSIEN   (0x00000080U) //!< Bit mask for TSI_GENCS_TSIEN.
#define BS_TSI_GENCS_TSIEN   (1U)          //!< Bit field size in bits for TSI_GENCS_TSIEN.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the TSI_GENCS_TSIEN field.
#define BR_TSI_GENCS_TSIEN   (BME_UBFX32(HW_TSI_GENCS_ADDR, BP_TSI_GENCS_TSIEN, BS_TSI_GENCS_TSIEN))
#endif

//! @brief Format value for bitfield TSI_GENCS_TSIEN.
#define BF_TSI_GENCS_TSIEN(v) (__REG_VALUE_TYPE((__REG_VALUE_TYPE((v), uint32_t) << BP_TSI_GENCS_TSIEN), uint32_t) & BM_TSI_GENCS_TSIEN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TSIEN field to a new value.
#define BW_TSI_GENCS_TSIEN(v) (BME_BFI32(HW_TSI_GENCS_ADDR, ((uint32_t)(v) << BP_TSI_GENCS_TSIEN), BP_TSI_GENCS_TSIEN, 1))
#endif
//@}

/*!
 * @name Register TSI_GENCS, field NSCN[12:8] (RW)
 *
 * These bits indicate the scan number for each electrode. The scan number is
 * equal to NSCN + 1, which allows the scan time ranges from 1 to 32. By default,
 * NSCN is configured as 0, which asserts the TSI scans once on the selected
 * eletrode channel.
 *
 * Values:
 * - 00000 - Once per electrode
 * - 00001 - Twice per electrode
 * - 00010 - 3 times per electrode
 * - 00011 - 4 times per electrode
 * - 00100 - 5 times per electrode
 * - 00101 - 6 times per electrode
 * - 00110 - 7 times per electrode
 * - 00111 - 8 times per electrode
 * - 01000 - 9 times per electrode
 * - 01001 - 10 times per electrode
 * - 01010 - 11 times per electrode
 * - 01011 - 12 times per electrode
 * - 01100 - 13 times per electrode
 * - 01101 - 14 times per electrode
 * - 01110 - 15 times per electrode
 * - 01111 - 16 times per electrode
 * - 10000 - 17 times per electrode
 * - 10001 - 18 times per electrode
 * - 10010 - 19 times per electrode
 * - 10011 - 20 times per electrode
 * - 10100 - 21 times per electrode
 * - 10101 - 22 times per electrode
 * - 10110 - 23 times per electrode
 * - 10111 - 24 times per electrode
 * - 11000 - 25 times per electrode
 * - 11001 - 26 times per electrode
 * - 11010 - 27 times per electrode
 * - 11011 - 28 times per electrode
 * - 11100 - 29 times per electrode
 * - 11101 - 30 times per electrode
 * - 11110 - 31 times per electrode
 * - 11111 - 32 times per electrode
 */
//@{
#define BP_TSI_GENCS_NSCN    (8U)          //!< Bit position for TSI_GENCS_NSCN.
#define BM_TSI_GENCS_NSCN    (0x00001F00U) //!< Bit mask for TSI_GENCS_NSCN.
#define BS_TSI_GENCS_NSCN    (5U)          //!< Bit field size in bits for TSI_GENCS_NSCN.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the TSI_GENCS_NSCN field.
#define BR_TSI_GENCS_NSCN    (BME_UBFX32(HW_TSI_GENCS_ADDR, BP_TSI_GENCS_NSCN, BS_TSI_GENCS_NSCN))
#endif

//! @brief Format value for bitfield TSI_GENCS_NSCN.
#define BF_TSI_GENCS_NSCN(v) (__REG_VALUE_TYPE((__REG_VALUE_TYPE((v), uint32_t) << BP_TSI_GENCS_NSCN), uint32_t) & BM_TSI_GENCS_NSCN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the NSCN field to a new value.
#define BW_TSI_GENCS_NSCN(v) (BME_BFI32(HW_TSI_GENCS_ADDR, ((uint32_t)(v) << BP_TSI_GENCS_NSCN), BP_TSI_GENCS_NSCN, 5))
#endif
//@}

/*!
 * @name Register TSI_GENCS, field PS[15:13] (RW)
 *
 * These bits indicate the prescaler of the output of electrode oscillator.
 *
 * Values:
 * - 000 - Electrode Oscillator Frequency divided by 1
 * - 001 - Electrode Oscillator Frequency divided by 2
 * - 010 - Electrode Oscillator Frequency divided by 4
 * - 011 - Electrode Oscillator Frequency divided by 8
 * - 100 - Electrode Oscillator Frequency divided by 16
 * - 101 - Electrode Oscillator Frequency divided by 32
 * - 110 - Electrode Oscillator Frequency divided by 64
 * - 111 - Electrode Oscillator Frequency divided by 128
 */
//@{
#define BP_TSI_GENCS_PS      (13U)         //!< Bit position for TSI_GENCS_PS.
#define BM_TSI_GENCS_PS      (0x0000E000U) //!< Bit mask for TSI_GENCS_PS.
#define BS_TSI_GENCS_PS      (3U)          //!< Bit field size in bits for TSI_GENCS_PS.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the TSI_GENCS_PS field.
#define BR_TSI_GENCS_PS      (BME_UBFX32(HW_TSI_GENCS_ADDR, BP_TSI_GENCS_PS, BS_TSI_GENCS_PS))
#endif

//! @brief Format value for bitfield TSI_GENCS_PS.
#define BF_TSI_GENCS_PS(v)   (__REG_VALUE_TYPE((__REG_VALUE_TYPE((v), uint32_t) << BP_TSI_GENCS_PS), uint32_t) & BM_TSI_GENCS_PS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PS field to a new value.
#define BW_TSI_GENCS_PS(v)   (BME_BFI32(HW_TSI_GENCS_ADDR, ((uint32_t)(v) << BP_TSI_GENCS_PS), BP_TSI_GENCS_PS, 3))
#endif
//@}

/*!
 * @name Register TSI_GENCS, field EXTCHRG[18:16] (RW)
 *
 * These bits indicate the electrode oscillator charge and discharge current
 * value.
 *
 * Values:
 * - 000 - 500 nA.
 * - 001 - 1 μA.
 * - 010 - 2 μA.
 * - 011 - 4 μA.
 * - 100 - 8 μA.
 * - 101 - 16 μA.
 * - 110 - 32 μA.
 * - 111 - 64 μA.
 */
//@{
#define BP_TSI_GENCS_EXTCHRG (16U)         //!< Bit position for TSI_GENCS_EXTCHRG.
#define BM_TSI_GENCS_EXTCHRG (0x00070000U) //!< Bit mask for TSI_GENCS_EXTCHRG.
#define BS_TSI_GENCS_EXTCHRG (3U)          //!< Bit field size in bits for TSI_GENCS_EXTCHRG.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the TSI_GENCS_EXTCHRG field.
#define BR_TSI_GENCS_EXTCHRG (BME_UBFX32(HW_TSI_GENCS_ADDR, BP_TSI_GENCS_EXTCHRG, BS_TSI_GENCS_EXTCHRG))
#endif

//! @brief Format value for bitfield TSI_GENCS_EXTCHRG.
#define BF_TSI_GENCS_EXTCHRG(v) (__REG_VALUE_TYPE((__REG_VALUE_TYPE((v), uint32_t) << BP_TSI_GENCS_EXTCHRG), uint32_t) & BM_TSI_GENCS_EXTCHRG)

#ifndef __LANGUAGE_ASM__
//! @brief Set the EXTCHRG field to a new value.
#define BW_TSI_GENCS_EXTCHRG(v) (BME_BFI32(HW_TSI_GENCS_ADDR, ((uint32_t)(v) << BP_TSI_GENCS_EXTCHRG), BP_TSI_GENCS_EXTCHRG, 3))
#endif
//@}

/*!
 * @name Register TSI_GENCS, field DVOLT[20:19] (RW)
 *
 * These bits indicate the oscillator's voltage rails as below.
 *
 * Values:
 * - 00 - DV = 1.03 V; VP = 1.33 V; Vm = 0.30 V.
 * - 01 - DV = 0.73 V; VP = 1.18 V; Vm = 0.45 V.
 * - 10 - DV = 0.43 V; VP = 1.03 V; Vm = 0.60 V.
 * - 11 - DV = 0.29 V; VP = 0.95 V; Vm = 0.67 V.
 */
//@{
#define BP_TSI_GENCS_DVOLT   (19U)         //!< Bit position for TSI_GENCS_DVOLT.
#define BM_TSI_GENCS_DVOLT   (0x00180000U) //!< Bit mask for TSI_GENCS_DVOLT.
#define BS_TSI_GENCS_DVOLT   (2U)          //!< Bit field size in bits for TSI_GENCS_DVOLT.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the TSI_GENCS_DVOLT field.
#define BR_TSI_GENCS_DVOLT   (BME_UBFX32(HW_TSI_GENCS_ADDR, BP_TSI_GENCS_DVOLT, BS_TSI_GENCS_DVOLT))
#endif

//! @brief Format value for bitfield TSI_GENCS_DVOLT.
#define BF_TSI_GENCS_DVOLT(v) (__REG_VALUE_TYPE((__REG_VALUE_TYPE((v), uint32_t) << BP_TSI_GENCS_DVOLT), uint32_t) & BM_TSI_GENCS_DVOLT)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DVOLT field to a new value.
#define BW_TSI_GENCS_DVOLT(v) (BME_BFI32(HW_TSI_GENCS_ADDR, ((uint32_t)(v) << BP_TSI_GENCS_DVOLT), BP_TSI_GENCS_DVOLT, 2))
#endif
//@}

/*!
 * @name Register TSI_GENCS, field REFCHRG[23:21] (RW)
 *
 * These bits indicate the reference oscillator charge and discharge current
 * value.
 *
 * Values:
 * - 000 - 500 nA.
 * - 001 - 1 μA.
 * - 010 - 2 μA.
 * - 011 - 4 μA.
 * - 100 - 8 μA.
 * - 101 - 16 μA.
 * - 110 - 32 μA.
 * - 111 - 64 μA.
 */
//@{
#define BP_TSI_GENCS_REFCHRG (21U)         //!< Bit position for TSI_GENCS_REFCHRG.
#define BM_TSI_GENCS_REFCHRG (0x00E00000U) //!< Bit mask for TSI_GENCS_REFCHRG.
#define BS_TSI_GENCS_REFCHRG (3U)          //!< Bit field size in bits for TSI_GENCS_REFCHRG.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the TSI_GENCS_REFCHRG field.
#define BR_TSI_GENCS_REFCHRG (BME_UBFX32(HW_TSI_GENCS_ADDR, BP_TSI_GENCS_REFCHRG, BS_TSI_GENCS_REFCHRG))
#endif

//! @brief Format value for bitfield TSI_GENCS_REFCHRG.
#define BF_TSI_GENCS_REFCHRG(v) (__REG_VALUE_TYPE((__REG_VALUE_TYPE((v), uint32_t) << BP_TSI_GENCS_REFCHRG), uint32_t) & BM_TSI_GENCS_REFCHRG)

#ifndef __LANGUAGE_ASM__
//! @brief Set the REFCHRG field to a new value.
#define BW_TSI_GENCS_REFCHRG(v) (BME_BFI32(HW_TSI_GENCS_ADDR, ((uint32_t)(v) << BP_TSI_GENCS_REFCHRG), BP_TSI_GENCS_REFCHRG, 3))
#endif
//@}

/*!
 * @name Register TSI_GENCS, field MODE[27:24] (RW)
 *
 * Set up TSI analog modes, especially, setting MODE[3:2] to not 2'b00 will
 * configure TSI to noise detection modes. MODE[1:0] take no effect on TSI operation
 * mode and should always write to 2'b00 for setting up. When reading this field
 * will return the analog status. Refer to chapter "Noise detection mode" for
 * details.
 *
 * Values:
 * - 0000 - Set TSI in capacitive sensing(non-noise detection) mode.
 * - 0100 - Set TSI analog to work in single threshold noise detection mode and
 *     the frequency limitation circuit is disabled.
 * - 1000 - Set TSI analog to work in single threshold noise detection mode and
 *     the frequency limitation circuit is enabled to work in higher frequencies
 *     operations.
 * - 1100 - Set TSI analog to work in automatic noise detection mode.
 */
//@{
#define BP_TSI_GENCS_MODE    (24U)         //!< Bit position for TSI_GENCS_MODE.
#define BM_TSI_GENCS_MODE    (0x0F000000U) //!< Bit mask for TSI_GENCS_MODE.
#define BS_TSI_GENCS_MODE    (4U)          //!< Bit field size in bits for TSI_GENCS_MODE.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the TSI_GENCS_MODE field.
#define BR_TSI_GENCS_MODE    (BME_UBFX32(HW_TSI_GENCS_ADDR, BP_TSI_GENCS_MODE, BS_TSI_GENCS_MODE))
#endif

//! @brief Format value for bitfield TSI_GENCS_MODE.
#define BF_TSI_GENCS_MODE(v) (__REG_VALUE_TYPE((__REG_VALUE_TYPE((v), uint32_t) << BP_TSI_GENCS_MODE), uint32_t) & BM_TSI_GENCS_MODE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the MODE field to a new value.
#define BW_TSI_GENCS_MODE(v) (BME_BFI32(HW_TSI_GENCS_ADDR, ((uint32_t)(v) << BP_TSI_GENCS_MODE), BP_TSI_GENCS_MODE, 4))
#endif
//@}

/*!
 * @name Register TSI_GENCS, field ESOR[28] (RW)
 *
 * This bit is used to select out-of-range or end-of-scan event to generate an
 * interrupt.
 *
 * Values:
 * - 0 - Out-of-range interrupt is allowed.
 * - 1 - End-of-scan interrupt is allowed.
 */
//@{
#define BP_TSI_GENCS_ESOR    (28U)         //!< Bit position for TSI_GENCS_ESOR.
#define BM_TSI_GENCS_ESOR    (0x10000000U) //!< Bit mask for TSI_GENCS_ESOR.
#define BS_TSI_GENCS_ESOR    (1U)          //!< Bit field size in bits for TSI_GENCS_ESOR.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the TSI_GENCS_ESOR field.
#define BR_TSI_GENCS_ESOR    (BME_UBFX32(HW_TSI_GENCS_ADDR, BP_TSI_GENCS_ESOR, BS_TSI_GENCS_ESOR))
#endif

//! @brief Format value for bitfield TSI_GENCS_ESOR.
#define BF_TSI_GENCS_ESOR(v) (__REG_VALUE_TYPE((__REG_VALUE_TYPE((v), uint32_t) << BP_TSI_GENCS_ESOR), uint32_t) & BM_TSI_GENCS_ESOR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ESOR field to a new value.
#define BW_TSI_GENCS_ESOR(v) (BME_BFI32(HW_TSI_GENCS_ADDR, ((uint32_t)(v) << BP_TSI_GENCS_ESOR), BP_TSI_GENCS_ESOR, 1))
#endif
//@}

/*!
 * @name Register TSI_GENCS, field OUTRGF[31] (W1C)
 *
 * This flag is set if the result register of the enabled electrode is out of
 * the range defined by the TSI_THRESHOLD register. This flag is set only when TSI
 * is configured in non-noise detection mode. It can be read once the CPU wakes.
 * Write "1" , when this flag is set, to clear it.
 */
//@{
#define BP_TSI_GENCS_OUTRGF  (31U)         //!< Bit position for TSI_GENCS_OUTRGF.
#define BM_TSI_GENCS_OUTRGF  (0x80000000U) //!< Bit mask for TSI_GENCS_OUTRGF.
#define BS_TSI_GENCS_OUTRGF  (1U)          //!< Bit field size in bits for TSI_GENCS_OUTRGF.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the TSI_GENCS_OUTRGF field.
#define BR_TSI_GENCS_OUTRGF  (BME_UBFX32(HW_TSI_GENCS_ADDR, BP_TSI_GENCS_OUTRGF, BS_TSI_GENCS_OUTRGF))
#endif

//! @brief Format value for bitfield TSI_GENCS_OUTRGF.
#define BF_TSI_GENCS_OUTRGF(v) (__REG_VALUE_TYPE((__REG_VALUE_TYPE((v), uint32_t) << BP_TSI_GENCS_OUTRGF), uint32_t) & BM_TSI_GENCS_OUTRGF)

#ifndef __LANGUAGE_ASM__
//! @brief Set the OUTRGF field to a new value.
#define BW_TSI_GENCS_OUTRGF(v) (BME_BFI32(HW_TSI_GENCS_ADDR, ((uint32_t)(v) << BP_TSI_GENCS_OUTRGF), BP_TSI_GENCS_OUTRGF, 1))
#endif
//@}

//-------------------------------------------------------------------------------------------
// HW_TSI_DATA - TSI DATA Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_TSI_DATA - TSI DATA Register (RW)
 *
 * Reset value: 0x00000000U
 */
typedef union _hw_tsi_data
{
    uint32_t U;
    struct _hw_tsi_data_bitfields
    {
        uint32_t TSICNT : 16;          //!< [15:0] TSI Conversion Counter Value
        uint32_t RESERVED0 : 6;        //!< [21:16]
        uint32_t SWTS : 1;             //!< [22] Software Trigger Start
        uint32_t DMAEN : 1;            //!< [23] DMA Transfer Enabled
        uint32_t RESERVED1 : 4;        //!< [27:24]
        uint32_t TSICH : 4;            //!< [31:28] TSICH
    } B;
} hw_tsi_data_t;
#endif

/*!
 * @name Constants and macros for entire TSI_DATA register
 */
//@{
#define HW_TSI_DATA_ADDR         (REGS_TSI_BASE + 0x4U)

#ifndef __LANGUAGE_ASM__
#define HW_TSI_DATA              (*(__IO hw_tsi_data_t *) HW_TSI_DATA_ADDR)
#define HW_TSI_DATA_RD()         (HW_TSI_DATA.U)
#define HW_TSI_DATA_WR(v)        (HW_TSI_DATA.U = (v))
#define HW_TSI_DATA_SET(v)       (BME_OR32(HW_TSI_DATA_ADDR, (uint32_t)(v)))
#define HW_TSI_DATA_CLR(v)       (BME_AND32(HW_TSI_DATA_ADDR, (uint32_t)(~(v))))
#define HW_TSI_DATA_TOG(v)       (BME_XOR32(HW_TSI_DATA_ADDR, (uint32_t)(v)))
#endif
//@}

/*
 * Constants & macros for individual TSI_DATA bitfields
 */

/*!
 * @name Register TSI_DATA, field TSICNT[15:0] (RO)
 *
 * These read-only bits record the accumulated scan counter value ticked by the
 * reference oscillator.
 */
//@{
#define BP_TSI_DATA_TSICNT   (0U)          //!< Bit position for TSI_DATA_TSICNT.
#define BM_TSI_DATA_TSICNT   (0x0000FFFFU) //!< Bit mask for TSI_DATA_TSICNT.
#define BS_TSI_DATA_TSICNT   (16U)         //!< Bit field size in bits for TSI_DATA_TSICNT.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the TSI_DATA_TSICNT field.
#define BR_TSI_DATA_TSICNT   (BME_UBFX32(HW_TSI_DATA_ADDR, BP_TSI_DATA_TSICNT, BS_TSI_DATA_TSICNT))
#endif
//@}

/*!
 * @name Register TSI_DATA, field SWTS[22] (WORZ)
 *
 * This write-only bit is a software start trigger. When STM bit is clear, write
 * "1" to this bit will start a scan. The electrode channel to be scanned is
 * determinated by TSI_DATA[TSICH] bits.
 *
 * Values:
 * - 0 - No effect.
 * - 1 - Start a scan to determine which channel is specified by TSI_DATA[TSICH].
 */
//@{
#define BP_TSI_DATA_SWTS     (22U)         //!< Bit position for TSI_DATA_SWTS.
#define BM_TSI_DATA_SWTS     (0x00400000U) //!< Bit mask for TSI_DATA_SWTS.
#define BS_TSI_DATA_SWTS     (1U)          //!< Bit field size in bits for TSI_DATA_SWTS.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the TSI_DATA_SWTS field.
#define BR_TSI_DATA_SWTS     (BME_UBFX32(HW_TSI_DATA_ADDR, BP_TSI_DATA_SWTS, BS_TSI_DATA_SWTS))
#endif

//! @brief Format value for bitfield TSI_DATA_SWTS.
#define BF_TSI_DATA_SWTS(v)  (__REG_VALUE_TYPE((__REG_VALUE_TYPE((v), uint32_t) << BP_TSI_DATA_SWTS), uint32_t) & BM_TSI_DATA_SWTS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the SWTS field to a new value.
#define BW_TSI_DATA_SWTS(v)  (BME_BFI32(HW_TSI_DATA_ADDR, ((uint32_t)(v) << BP_TSI_DATA_SWTS), BP_TSI_DATA_SWTS, 1))
#endif
//@}

/*!
 * @name Register TSI_DATA, field DMAEN[23] (RW)
 *
 * This bit is used together with the TSI interrupt enable bits(TSIIE, ESOR) to
 * generate a DMA transfer request instead of an interrupt.
 *
 * Values:
 * - 0 - Interrupt is selected when the interrupt enable bit is set and the
 *     corresponding TSI events assert.
 * - 1 - DMA transfer request is selected when the interrupt enable bit is set
 *     and the corresponding TSI events assert.
 */
//@{
#define BP_TSI_DATA_DMAEN    (23U)         //!< Bit position for TSI_DATA_DMAEN.
#define BM_TSI_DATA_DMAEN    (0x00800000U) //!< Bit mask for TSI_DATA_DMAEN.
#define BS_TSI_DATA_DMAEN    (1U)          //!< Bit field size in bits for TSI_DATA_DMAEN.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the TSI_DATA_DMAEN field.
#define BR_TSI_DATA_DMAEN    (BME_UBFX32(HW_TSI_DATA_ADDR, BP_TSI_DATA_DMAEN, BS_TSI_DATA_DMAEN))
#endif

//! @brief Format value for bitfield TSI_DATA_DMAEN.
#define BF_TSI_DATA_DMAEN(v) (__REG_VALUE_TYPE((__REG_VALUE_TYPE((v), uint32_t) << BP_TSI_DATA_DMAEN), uint32_t) & BM_TSI_DATA_DMAEN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DMAEN field to a new value.
#define BW_TSI_DATA_DMAEN(v) (BME_BFI32(HW_TSI_DATA_ADDR, ((uint32_t)(v) << BP_TSI_DATA_DMAEN), BP_TSI_DATA_DMAEN, 1))
#endif
//@}

/*!
 * @name Register TSI_DATA, field TSICH[31:28] (RW)
 *
 * These bits specify current channel to be measured. In hardware trigger mode
 * (TSI_GENCS[STM] = 1), the scan will not start until the hardware trigger
 * occurs. In software trigger mode (TSI_GENCS[STM] = 0), the scan starts immediately
 * when TSI_DATA[SWTS] bit is written by 1.
 *
 * Values:
 * - 0000 - Channel 0.
 * - 0001 - Channel 1.
 * - 0010 - Channel 2.
 * - 0011 - Channel 3.
 * - 0100 - Channel 4.
 * - 0101 - Channel 5.
 * - 0110 - Channel 6.
 * - 0111 - Channel 7.
 * - 1000 - Channel 8.
 * - 1001 - Channel 9.
 * - 1010 - Channel 10.
 * - 1011 - Channel 11.
 * - 1100 - Channel 12.
 * - 1101 - Channel 13.
 * - 1110 - Channel 14.
 * - 1111 - Channel 15.
 */
//@{
#define BP_TSI_DATA_TSICH    (28U)         //!< Bit position for TSI_DATA_TSICH.
#define BM_TSI_DATA_TSICH    (0xF0000000U) //!< Bit mask for TSI_DATA_TSICH.
#define BS_TSI_DATA_TSICH    (4U)          //!< Bit field size in bits for TSI_DATA_TSICH.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the TSI_DATA_TSICH field.
#define BR_TSI_DATA_TSICH    (BME_UBFX32(HW_TSI_DATA_ADDR, BP_TSI_DATA_TSICH, BS_TSI_DATA_TSICH))
#endif

//! @brief Format value for bitfield TSI_DATA_TSICH.
#define BF_TSI_DATA_TSICH(v) (__REG_VALUE_TYPE((__REG_VALUE_TYPE((v), uint32_t) << BP_TSI_DATA_TSICH), uint32_t) & BM_TSI_DATA_TSICH)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TSICH field to a new value.
#define BW_TSI_DATA_TSICH(v) (BME_BFI32(HW_TSI_DATA_ADDR, ((uint32_t)(v) << BP_TSI_DATA_TSICH), BP_TSI_DATA_TSICH, 4))
#endif
//@}

//-------------------------------------------------------------------------------------------
// HW_TSI_TSHD - TSI Threshold Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_TSI_TSHD - TSI Threshold Register (RW)
 *
 * Reset value: 0x00000000U
 */
typedef union _hw_tsi_tshd
{
    uint32_t U;
    struct _hw_tsi_tshd_bitfields
    {
        uint32_t THRESL : 16;          //!< [15:0] TSI Wakeup Channel Low-threshold
        uint32_t THRESH : 16;          //!< [31:16] TSI Wakeup Channel High-threshold
    } B;
} hw_tsi_tshd_t;
#endif

/*!
 * @name Constants and macros for entire TSI_TSHD register
 */
//@{
#define HW_TSI_TSHD_ADDR         (REGS_TSI_BASE + 0x8U)

#ifndef __LANGUAGE_ASM__
#define HW_TSI_TSHD              (*(__IO hw_tsi_tshd_t *) HW_TSI_TSHD_ADDR)
#define HW_TSI_TSHD_RD()         (HW_TSI_TSHD.U)
#define HW_TSI_TSHD_WR(v)        (HW_TSI_TSHD.U = (v))
#define HW_TSI_TSHD_SET(v)       (BME_OR32(HW_TSI_TSHD_ADDR, (uint32_t)(v)))
#define HW_TSI_TSHD_CLR(v)       (BME_AND32(HW_TSI_TSHD_ADDR, (uint32_t)(~(v))))
#define HW_TSI_TSHD_TOG(v)       (BME_XOR32(HW_TSI_TSHD_ADDR, (uint32_t)(v)))
#endif
//@}

/*
 * Constants & macros for individual TSI_TSHD bitfields
 */

/*!
 * @name Register TSI_TSHD, field THRESL[15:0] (RW)
 *
 * This half-word specifies the low threshold of the wakeup channel.
 */
//@{
#define BP_TSI_TSHD_THRESL   (0U)          //!< Bit position for TSI_TSHD_THRESL.
#define BM_TSI_TSHD_THRESL   (0x0000FFFFU) //!< Bit mask for TSI_TSHD_THRESL.
#define BS_TSI_TSHD_THRESL   (16U)         //!< Bit field size in bits for TSI_TSHD_THRESL.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the TSI_TSHD_THRESL field.
#define BR_TSI_TSHD_THRESL   (BME_UBFX32(HW_TSI_TSHD_ADDR, BP_TSI_TSHD_THRESL, BS_TSI_TSHD_THRESL))
#endif

//! @brief Format value for bitfield TSI_TSHD_THRESL.
#define BF_TSI_TSHD_THRESL(v) (__REG_VALUE_TYPE((__REG_VALUE_TYPE((v), uint32_t) << BP_TSI_TSHD_THRESL), uint32_t) & BM_TSI_TSHD_THRESL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the THRESL field to a new value.
#define BW_TSI_TSHD_THRESL(v) (BME_BFI32(HW_TSI_TSHD_ADDR, ((uint32_t)(v) << BP_TSI_TSHD_THRESL), BP_TSI_TSHD_THRESL, 16))
#endif
//@}

/*!
 * @name Register TSI_TSHD, field THRESH[31:16] (RW)
 *
 * This half-word specifies the high threshold of the wakeup channel.
 */
//@{
#define BP_TSI_TSHD_THRESH   (16U)         //!< Bit position for TSI_TSHD_THRESH.
#define BM_TSI_TSHD_THRESH   (0xFFFF0000U) //!< Bit mask for TSI_TSHD_THRESH.
#define BS_TSI_TSHD_THRESH   (16U)         //!< Bit field size in bits for TSI_TSHD_THRESH.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the TSI_TSHD_THRESH field.
#define BR_TSI_TSHD_THRESH   (BME_UBFX32(HW_TSI_TSHD_ADDR, BP_TSI_TSHD_THRESH, BS_TSI_TSHD_THRESH))
#endif

//! @brief Format value for bitfield TSI_TSHD_THRESH.
#define BF_TSI_TSHD_THRESH(v) (__REG_VALUE_TYPE((__REG_VALUE_TYPE((v), uint32_t) << BP_TSI_TSHD_THRESH), uint32_t) & BM_TSI_TSHD_THRESH)

#ifndef __LANGUAGE_ASM__
//! @brief Set the THRESH field to a new value.
#define BW_TSI_TSHD_THRESH(v) (BME_BFI32(HW_TSI_TSHD_ADDR, ((uint32_t)(v) << BP_TSI_TSHD_THRESH), BP_TSI_TSHD_THRESH, 16))
#endif
//@}

//-------------------------------------------------------------------------------------------
// hw_tsi_t - module struct
//-------------------------------------------------------------------------------------------
/*!
 * @brief All TSI module registers.
 */
#ifndef __LANGUAGE_ASM__
#pragma pack(1)
typedef struct _hw_tsi
{
    __IO hw_tsi_gencs_t GENCS;             //!< [0x0] TSI General Control and Status Register
    __IO hw_tsi_data_t DATA;               //!< [0x4] TSI DATA Register
    __IO hw_tsi_tshd_t TSHD;               //!< [0x8] TSI Threshold Register
} hw_tsi_t;
#pragma pack()

//! @brief Macro to access all TSI registers.
//! @return Reference (not a pointer) to the registers struct. To get a pointer to the struct,
//!     use the '&' operator, like <code>&HW_TSI</code>.
#define HW_TSI         (*(hw_tsi_t *) REGS_TSI_BASE)
#endif

#endif // __HW_TSI_REGISTERS_H__
// v22/130726/0.9
// EOF
