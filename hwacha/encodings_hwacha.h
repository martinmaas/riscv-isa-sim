#ifndef ENCODINGS_HWACHA
#define ENCODINGS_HWACHA

#define MATCH_FCVT_H_LU 0x6c000053
#define MASK_FCVT_H_LU  0xfff0007f
#define MATCH_FMIN_H 0xc4000053
#define MASK_FMIN_H  0xfe00707f
#define MATCH_FCVT_WU_H 0x5c000053
#define MASK_FCVT_WU_H  0xfff0007f
#define MATCH_FDIV_H 0x1c000053
#define MASK_FDIV_H  0xfe00007f
#define MATCH_FCVT_H_WU 0x7c000053
#define MASK_FCVT_H_WU  0xfff0007f
#define MATCH_FSGNJ_H 0x2c000053
#define MASK_FSGNJ_H  0xfe00707f
#define MATCH_FNMSUB_H 0x400004b
#define MASK_FNMSUB_H  0x600007f
#define MATCH_FLE_H 0xbc000053
#define MASK_FLE_H  0xfe00707f
#define MATCH_FCVT_L_H 0x44000053
#define MASK_FCVT_L_H  0xfff0007f
#define MATCH_FNMADD_H 0x400004f
#define MASK_FNMADD_H  0x600007f
#define MATCH_FCVT_H_S 0x90000053
#define MASK_FCVT_H_S  0xfff0007f
#define MATCH_FCVT_H_W 0x74000053
#define MASK_FCVT_H_W  0xfff0007f
#define MATCH_FCVT_D_H 0x8c000053
#define MASK_FCVT_D_H  0xfff0007f
#define MATCH_FMAX_H 0xcc000053
#define MASK_FMAX_H  0xfe00707f
#define MATCH_FCVT_LU_H 0x4c000053
#define MASK_FCVT_LU_H  0xfff0007f
#define MATCH_FCVT_H_L 0x64000053
#define MASK_FCVT_H_L  0xfff0007f
#define MATCH_FMV_X_H 0xe4000053
#define MASK_FMV_X_H  0xfff0707f
#define MATCH_FCVT_H_D 0x92000053
#define MASK_FCVT_H_D  0xfff0007f
#define MATCH_FLT_H 0xb4000053
#define MASK_FLT_H  0xfe00707f
#define MATCH_FADD_H 0x4000053
#define MASK_FADD_H  0xfe00007f
#define MATCH_FCVT_S_H 0x84000053
#define MASK_FCVT_S_H  0xfff0007f
#define MATCH_FCVT_W_H 0x54000053
#define MASK_FCVT_W_H  0xfff0007f
#define MATCH_FMUL_H 0x14000053
#define MASK_FMUL_H  0xfe00007f
#define MATCH_FMADD_H 0x4000043
#define MASK_FMADD_H  0x600007f
#define MATCH_FSQRT_H 0x24000053
#define MASK_FSQRT_H  0xfff0007f
#define MATCH_FSGNJN_H 0x34000053
#define MASK_FSGNJN_H  0xfe00707f
#define MATCH_FSUB_H 0xc000053
#define MASK_FSUB_H  0xfe00007f
#define MATCH_FSH 0x1027
#define MASK_FSH  0x707f
#define MATCH_FSGNJX_H 0x3c000053
#define MASK_FSGNJX_H  0xfe00707f
#define MATCH_FLH 0x1007
#define MASK_FLH  0x707f
#define MATCH_FMSUB_H 0x4000047
#define MASK_FMSUB_H  0x600007f
#define MATCH_FEQ_H 0xac000053
#define MASK_FEQ_H  0xfe00707f
#define MATCH_FMV_H_X 0xf4000053
#define MASK_FMV_H_X  0xfff0707f

#define MASK_VF  0x1f0707f
#define MASK_VFLSEGD  0x1ff0707f
#define MASK_VFLSEGSTD  0x1e00707f
#define MASK_VFLSEGSTW  0x1e00707f
#define MASK_VFLSEGW  0x1ff0707f
#define MASK_VFMVV  0xfff0707f
#define MASK_VFMSV_S  0xfff0707f
#define MASK_VFMSV_D  0xfff0707f
#define MASK_VFSSEGD  0x1ff0707f
#define MASK_VFSSEGSTD  0x1e00707f
#define MASK_VFSSEGSTW  0x1e00707f
#define MASK_VFSSEGW  0x1ff0707f
#define MASK_VGETCFG  0xfffff07f
#define MASK_VGETVL  0xfffff07f
#define MASK_VLSEGB  0x1ff0707f
#define MASK_VLSEGBU  0x1ff0707f
#define MASK_VLSEGD  0x1ff0707f
#define MASK_VLSEGH  0x1ff0707f
#define MASK_VLSEGHU  0x1ff0707f
#define MASK_VLSEGSTB  0x1e00707f
#define MASK_VLSEGSTBU  0x1e00707f
#define MASK_VLSEGSTD  0x1e00707f
#define MASK_VLSEGSTH  0x1e00707f
#define MASK_VLSEGSTHU  0x1e00707f
#define MASK_VLSEGSTW  0x1e00707f
#define MASK_VLSEGSTWU  0x1e00707f
#define MASK_VLSEGW  0x1ff0707f
#define MASK_VLSEGWU  0x1ff0707f
#define MASK_VMSV  0xfff0707f
#define MASK_VMVV  0xfff0707f
#define MASK_VSETCFG  0x7fff
#define MASK_VSETVL  0xfff0707f
#define MASK_VSSEGB  0x1ff0707f
#define MASK_VSSEGD  0x1ff0707f
#define MASK_VSSEGH  0x1ff0707f
#define MASK_VSSEGSTB  0x1e00707f
#define MASK_VSSEGSTD  0x1e00707f
#define MASK_VSSEGSTH  0x1e00707f
#define MASK_VSSEGSTW  0x1e00707f
#define MASK_VSSEGW  0x1ff0707f
#define MASK_VXCPTAUX  0xfffff07f
#define MASK_VXCPTCAUSE  0xfffff07f
#define MASK_VXCPTEVAC  0xfff07fff
#define MASK_VXCPTHOLD  0xffffffff
#define MASK_VXCPTKILL  0xffffffff
#define MASK_VXCPTRESTORE  0xfff07fff
#define MASK_VXCPTSAVE  0xfff07fff

#define MATCH_VF 0x10202b
#define MATCH_VFLSEGD 0x1600205b
#define MATCH_VFLSEGSTD 0x1600305b
#define MATCH_VFLSEGSTW 0x1400305b
#define MATCH_VFLSEGW 0x1400205b
#define MATCH_VFMVV 0x1000002b
#define MATCH_VFMSV_S 0x1000202b
#define MATCH_VFMSV_D 0x1200202b
#define MATCH_VFSSEGD 0x1600207b
#define MATCH_VFSSEGSTD 0x1600307b
#define MATCH_VFSSEGSTW 0x1400307b
#define MATCH_VFSSEGW 0x1400207b
#define MATCH_VGETCFG 0x400b
#define MATCH_VGETVL 0x200400b
#define MATCH_VLSEGB 0x205b
#define MATCH_VLSEGBU 0x800205b
#define MATCH_VLSEGD 0x600205b
#define MATCH_VLSEGH 0x200205b
#define MATCH_VLSEGHU 0xa00205b
#define MATCH_VLSEGSTB 0x305b
#define MATCH_VLSEGSTBU 0x800305b
#define MATCH_VLSEGSTD 0x600305b
#define MATCH_VLSEGSTH 0x200305b
#define MATCH_VLSEGSTHU 0xa00305b
#define MATCH_VLSEGSTW 0x400305b
#define MATCH_VLSEGSTWU 0xc00305b
#define MATCH_VLSEGW 0x400205b
#define MATCH_VLSEGWU 0xc00205b
#define MATCH_VMSV 0x200202b
#define MATCH_VMVV 0x200002b
#define MATCH_VSETCFG 0x200b
#define MATCH_VSETVL 0x600b
#define MATCH_VSSEGB 0x207b
#define MATCH_VSSEGD 0x600207b
#define MATCH_VSSEGH 0x200207b
#define MATCH_VSSEGSTB 0x307b
#define MATCH_VSSEGSTD 0x600307b
#define MATCH_VSSEGSTH 0x200307b
#define MATCH_VSSEGSTW 0x400307b
#define MATCH_VSSEGW 0x400207b
#define MATCH_VXCPTAUX 0x200402b
#define MATCH_VXCPTCAUSE 0x402b
#define MATCH_VXCPTEVAC 0x600302b
#define MATCH_VXCPTHOLD 0x800302b
#define MATCH_VXCPTKILL 0x400302b
#define MATCH_VXCPTRESTORE 0x200302b
#define MATCH_VXCPTSAVE 0x302b

#endif /* ENCODINGS_HWACHA */
