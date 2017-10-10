
#ifndef AXI_ENABLE_H
#define AXI_ENABLE_H


/****************** Include Files ********************/
#include "xil_types.h"
#include "xstatus.h"

#define AXI_ENABLE_S_AXI_SLV_REG0_OFFSET 0


/**************************** Type Definitions *****************************/
/**
 *
 * Write a value to a AXI_ENABLE register. A 32 bit write is performed.
 * If the component is implemented in a smaller width, only the least
 * significant data is written.
 *
 * @param   BaseAddress is the base address of the AXI_ENABLEdevice.
 * @param   RegOffset is the register offset from the base to write to.
 * @param   Data is the duration of the enable signal to write to the register.
 *
 * @return  None.
 *
 * @note
 * C-style signature:
 * 	void AXI_ENABLE_mWriteReg(u32 BaseAddress, u32 Data)
 *
 */
#define AXI_ENABLE_mWriteReg(BaseAddress, Data) \
  	Xil_Out32((BaseAddress) + (AXI_ENABLE_S_AXI_SLV_REG0_OFFSET), (u32)(Data))


#endif // AXI_ENABLE_H
