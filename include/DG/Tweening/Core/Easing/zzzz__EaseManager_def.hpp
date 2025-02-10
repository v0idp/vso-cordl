#pragma once
// IWYU pragma private; include "DG/Tweening/Core/Easing/EaseManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(EaseManager)
namespace DG::Tweening::Core::Easing {
class EaseManager___c;
}
namespace DG::Tweening {
class EaseFunction;
}
namespace DG::Tweening {
struct Ease;
}
namespace DG::Tweening {
class Tween;
}
// Forward declare root types
namespace DG::Tweening::Core::Easing {
class EaseManager;
}
namespace DG::Tweening::Core::Easing {
class EaseManager___c;
}
// Write type traits
MARK_REF_PTR_T(::DG::Tweening::Core::Easing::EaseManager);
MARK_REF_PTR_T(::DG::Tweening::Core::Easing::EaseManager___c);
// Dependencies System.Object
namespace DG::Tweening::Core::Easing {
// Is value type: false
// CS Name: DG.Tweening.Core.Easing.EaseManager/<>c
class CORDL_TYPE EaseManager___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::DG::Tweening::Core::Easing::EaseManager___c*  __9;

/// @brief Field <>9__4_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__4_0, put=setStaticF___9__4_0)) ::DG::Tweening::EaseFunction*  __9__4_0;

/// @brief Field <>9__4_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__4_1, put=setStaticF___9__4_1)) ::DG::Tweening::EaseFunction*  __9__4_1;

/// @brief Field <>9__4_10, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__4_10, put=setStaticF___9__4_10)) ::DG::Tweening::EaseFunction*  __9__4_10;

/// @brief Field <>9__4_11, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__4_11, put=setStaticF___9__4_11)) ::DG::Tweening::EaseFunction*  __9__4_11;

/// @brief Field <>9__4_12, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__4_12, put=setStaticF___9__4_12)) ::DG::Tweening::EaseFunction*  __9__4_12;

/// @brief Field <>9__4_13, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__4_13, put=setStaticF___9__4_13)) ::DG::Tweening::EaseFunction*  __9__4_13;

/// @brief Field <>9__4_14, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__4_14, put=setStaticF___9__4_14)) ::DG::Tweening::EaseFunction*  __9__4_14;

/// @brief Field <>9__4_15, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__4_15, put=setStaticF___9__4_15)) ::DG::Tweening::EaseFunction*  __9__4_15;

/// @brief Field <>9__4_16, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__4_16, put=setStaticF___9__4_16)) ::DG::Tweening::EaseFunction*  __9__4_16;

/// @brief Field <>9__4_17, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__4_17, put=setStaticF___9__4_17)) ::DG::Tweening::EaseFunction*  __9__4_17;

/// @brief Field <>9__4_18, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__4_18, put=setStaticF___9__4_18)) ::DG::Tweening::EaseFunction*  __9__4_18;

/// @brief Field <>9__4_19, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__4_19, put=setStaticF___9__4_19)) ::DG::Tweening::EaseFunction*  __9__4_19;

/// @brief Field <>9__4_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__4_2, put=setStaticF___9__4_2)) ::DG::Tweening::EaseFunction*  __9__4_2;

/// @brief Field <>9__4_20, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__4_20, put=setStaticF___9__4_20)) ::DG::Tweening::EaseFunction*  __9__4_20;

/// @brief Field <>9__4_21, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__4_21, put=setStaticF___9__4_21)) ::DG::Tweening::EaseFunction*  __9__4_21;

/// @brief Field <>9__4_22, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__4_22, put=setStaticF___9__4_22)) ::DG::Tweening::EaseFunction*  __9__4_22;

/// @brief Field <>9__4_23, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__4_23, put=setStaticF___9__4_23)) ::DG::Tweening::EaseFunction*  __9__4_23;

/// @brief Field <>9__4_24, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__4_24, put=setStaticF___9__4_24)) ::DG::Tweening::EaseFunction*  __9__4_24;

/// @brief Field <>9__4_25, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__4_25, put=setStaticF___9__4_25)) ::DG::Tweening::EaseFunction*  __9__4_25;

/// @brief Field <>9__4_26, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__4_26, put=setStaticF___9__4_26)) ::DG::Tweening::EaseFunction*  __9__4_26;

/// @brief Field <>9__4_27, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__4_27, put=setStaticF___9__4_27)) ::DG::Tweening::EaseFunction*  __9__4_27;

/// @brief Field <>9__4_28, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__4_28, put=setStaticF___9__4_28)) ::DG::Tweening::EaseFunction*  __9__4_28;

/// @brief Field <>9__4_29, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__4_29, put=setStaticF___9__4_29)) ::DG::Tweening::EaseFunction*  __9__4_29;

/// @brief Field <>9__4_3, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__4_3, put=setStaticF___9__4_3)) ::DG::Tweening::EaseFunction*  __9__4_3;

/// @brief Field <>9__4_30, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__4_30, put=setStaticF___9__4_30)) ::DG::Tweening::EaseFunction*  __9__4_30;

/// @brief Field <>9__4_31, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__4_31, put=setStaticF___9__4_31)) ::DG::Tweening::EaseFunction*  __9__4_31;

/// @brief Field <>9__4_32, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__4_32, put=setStaticF___9__4_32)) ::DG::Tweening::EaseFunction*  __9__4_32;

/// @brief Field <>9__4_33, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__4_33, put=setStaticF___9__4_33)) ::DG::Tweening::EaseFunction*  __9__4_33;

/// @brief Field <>9__4_34, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__4_34, put=setStaticF___9__4_34)) ::DG::Tweening::EaseFunction*  __9__4_34;

/// @brief Field <>9__4_35, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__4_35, put=setStaticF___9__4_35)) ::DG::Tweening::EaseFunction*  __9__4_35;

/// @brief Field <>9__4_4, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__4_4, put=setStaticF___9__4_4)) ::DG::Tweening::EaseFunction*  __9__4_4;

/// @brief Field <>9__4_5, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__4_5, put=setStaticF___9__4_5)) ::DG::Tweening::EaseFunction*  __9__4_5;

/// @brief Field <>9__4_6, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__4_6, put=setStaticF___9__4_6)) ::DG::Tweening::EaseFunction*  __9__4_6;

/// @brief Field <>9__4_7, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__4_7, put=setStaticF___9__4_7)) ::DG::Tweening::EaseFunction*  __9__4_7;

/// @brief Field <>9__4_8, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__4_8, put=setStaticF___9__4_8)) ::DG::Tweening::EaseFunction*  __9__4_8;

/// @brief Field <>9__4_9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__4_9, put=setStaticF___9__4_9)) ::DG::Tweening::EaseFunction*  __9__4_9;

static inline ::DG::Tweening::Core::Easing::EaseManager___c* New_ctor() ;

/// @brief Method <ToEaseFunction>b__4_0, addr 0x18eca90, size 0x8, virtual false, abstract: false, final false
inline float_t _ToEaseFunction_b__4_0(float_t  time, float_t  duration, float_t  overshootOrAmplitude, float_t  period) ;

/// @brief Method <ToEaseFunction>b__4_1, addr 0x18eca98, size 0x80, virtual false, abstract: false, final false
inline float_t _ToEaseFunction_b__4_1(float_t  time, float_t  duration, float_t  overshootOrAmplitude, float_t  period) ;

/// @brief Method <ToEaseFunction>b__4_10, addr 0x18eccf8, size 0x14, virtual false, abstract: false, final false
inline float_t _ToEaseFunction_b__4_10(float_t  time, float_t  duration, float_t  overshootOrAmplitude, float_t  period) ;

/// @brief Method <ToEaseFunction>b__4_11, addr 0x18ecd0c, size 0x24, virtual false, abstract: false, final false
inline float_t _ToEaseFunction_b__4_11(float_t  time, float_t  duration, float_t  overshootOrAmplitude, float_t  period) ;

/// @brief Method <ToEaseFunction>b__4_12, addr 0x18ecd30, size 0x4c, virtual false, abstract: false, final false
inline float_t _ToEaseFunction_b__4_12(float_t  time, float_t  duration, float_t  overshootOrAmplitude, float_t  period) ;

/// @brief Method <ToEaseFunction>b__4_13, addr 0x18ecd7c, size 0x18, virtual false, abstract: false, final false
inline float_t _ToEaseFunction_b__4_13(float_t  time, float_t  duration, float_t  overshootOrAmplitude, float_t  period) ;

/// @brief Method <ToEaseFunction>b__4_14, addr 0x18ecd94, size 0x28, virtual false, abstract: false, final false
inline float_t _ToEaseFunction_b__4_14(float_t  time, float_t  duration, float_t  overshootOrAmplitude, float_t  period) ;

/// @brief Method <ToEaseFunction>b__4_15, addr 0x18ecdbc, size 0x58, virtual false, abstract: false, final false
inline float_t _ToEaseFunction_b__4_15(float_t  time, float_t  duration, float_t  overshootOrAmplitude, float_t  period) ;

/// @brief Method <ToEaseFunction>b__4_16, addr 0x18ece14, size 0x88, virtual false, abstract: false, final false
inline float_t _ToEaseFunction_b__4_16(float_t  time, float_t  duration, float_t  overshootOrAmplitude, float_t  period) ;

/// @brief Method <ToEaseFunction>b__4_17, addr 0x18ece9c, size 0x88, virtual false, abstract: false, final false
inline float_t _ToEaseFunction_b__4_17(float_t  time, float_t  duration, float_t  overshootOrAmplitude, float_t  period) ;

/// @brief Method <ToEaseFunction>b__4_18, addr 0x18ecf24, size 0xf0, virtual false, abstract: false, final false
inline float_t _ToEaseFunction_b__4_18(float_t  time, float_t  duration, float_t  overshootOrAmplitude, float_t  period) ;

/// @brief Method <ToEaseFunction>b__4_19, addr 0x18ed014, size 0x7c, virtual false, abstract: false, final false
inline float_t _ToEaseFunction_b__4_19(float_t  time, float_t  duration, float_t  overshootOrAmplitude, float_t  period) ;

/// @brief Method <ToEaseFunction>b__4_2, addr 0x18ecb18, size 0x78, virtual false, abstract: false, final false
inline float_t _ToEaseFunction_b__4_2(float_t  time, float_t  duration, float_t  overshootOrAmplitude, float_t  period) ;

/// @brief Method <ToEaseFunction>b__4_20, addr 0x18ed090, size 0x78, virtual false, abstract: false, final false
inline float_t _ToEaseFunction_b__4_20(float_t  time, float_t  duration, float_t  overshootOrAmplitude, float_t  period) ;

/// @brief Method <ToEaseFunction>b__4_21, addr 0x18ed108, size 0xb4, virtual false, abstract: false, final false
inline float_t _ToEaseFunction_b__4_21(float_t  time, float_t  duration, float_t  overshootOrAmplitude, float_t  period) ;

/// @brief Method <ToEaseFunction>b__4_22, addr 0x18ed1bc, size 0x14c, virtual false, abstract: false, final false
inline float_t _ToEaseFunction_b__4_22(float_t  time, float_t  duration, float_t  overshootOrAmplitude, float_t  period) ;

/// @brief Method <ToEaseFunction>b__4_23, addr 0x18ed308, size 0x148, virtual false, abstract: false, final false
inline float_t _ToEaseFunction_b__4_23(float_t  time, float_t  duration, float_t  overshootOrAmplitude, float_t  period) ;

/// @brief Method <ToEaseFunction>b__4_24, addr 0x18ed450, size 0x1cc, virtual false, abstract: false, final false
inline float_t _ToEaseFunction_b__4_24(float_t  time, float_t  duration, float_t  overshootOrAmplitude, float_t  period) ;

/// @brief Method <ToEaseFunction>b__4_25, addr 0x18ed61c, size 0x20, virtual false, abstract: false, final false
inline float_t _ToEaseFunction_b__4_25(float_t  time, float_t  duration, float_t  overshootOrAmplitude, float_t  period) ;

/// @brief Method <ToEaseFunction>b__4_26, addr 0x18ed63c, size 0x2c, virtual false, abstract: false, final false
inline float_t _ToEaseFunction_b__4_26(float_t  time, float_t  duration, float_t  overshootOrAmplitude, float_t  period) ;

/// @brief Method <ToEaseFunction>b__4_27, addr 0x18ed668, size 0x70, virtual false, abstract: false, final false
inline float_t _ToEaseFunction_b__4_27(float_t  time, float_t  duration, float_t  overshootOrAmplitude, float_t  period) ;

/// @brief Method <ToEaseFunction>b__4_28, addr 0x18ed6d8, size 0x1c, virtual false, abstract: false, final false
inline float_t _ToEaseFunction_b__4_28(float_t  time, float_t  duration, float_t  overshootOrAmplitude, float_t  period) ;

/// @brief Method <ToEaseFunction>b__4_29, addr 0x18ed6f4, size 0x4, virtual false, abstract: false, final false
inline float_t _ToEaseFunction_b__4_29(float_t  time, float_t  duration, float_t  overshootOrAmplitude, float_t  period) ;

/// @brief Method <ToEaseFunction>b__4_3, addr 0x18ecb90, size 0x88, virtual false, abstract: false, final false
inline float_t _ToEaseFunction_b__4_3(float_t  time, float_t  duration, float_t  overshootOrAmplitude, float_t  period) ;

/// @brief Method <ToEaseFunction>b__4_30, addr 0x18ed6f8, size 0x4, virtual false, abstract: false, final false
inline float_t _ToEaseFunction_b__4_30(float_t  time, float_t  duration, float_t  overshootOrAmplitude, float_t  period) ;

/// @brief Method <ToEaseFunction>b__4_31, addr 0x18ed6fc, size 0x4, virtual false, abstract: false, final false
inline float_t _ToEaseFunction_b__4_31(float_t  time, float_t  duration, float_t  overshootOrAmplitude, float_t  period) ;

/// @brief Method <ToEaseFunction>b__4_32, addr 0x18ed700, size 0x4, virtual false, abstract: false, final false
inline float_t _ToEaseFunction_b__4_32(float_t  time, float_t  duration, float_t  overshootOrAmplitude, float_t  period) ;

/// @brief Method <ToEaseFunction>b__4_33, addr 0x18ed704, size 0x4, virtual false, abstract: false, final false
inline float_t _ToEaseFunction_b__4_33(float_t  time, float_t  duration, float_t  overshootOrAmplitude, float_t  period) ;

/// @brief Method <ToEaseFunction>b__4_34, addr 0x18ed708, size 0x4, virtual false, abstract: false, final false
inline float_t _ToEaseFunction_b__4_34(float_t  time, float_t  duration, float_t  overshootOrAmplitude, float_t  period) ;

/// @brief Method <ToEaseFunction>b__4_35, addr 0x18ed70c, size 0x18, virtual false, abstract: false, final false
inline float_t _ToEaseFunction_b__4_35(float_t  time, float_t  duration, float_t  overshootOrAmplitude, float_t  period) ;

/// @brief Method <ToEaseFunction>b__4_4, addr 0x18ecc18, size 0xc, virtual false, abstract: false, final false
inline float_t _ToEaseFunction_b__4_4(float_t  time, float_t  duration, float_t  overshootOrAmplitude, float_t  period) ;

/// @brief Method <ToEaseFunction>b__4_5, addr 0x18ecc24, size 0x18, virtual false, abstract: false, final false
inline float_t _ToEaseFunction_b__4_5(float_t  time, float_t  duration, float_t  overshootOrAmplitude, float_t  period) ;

/// @brief Method <ToEaseFunction>b__4_6, addr 0x18ecc3c, size 0x44, virtual false, abstract: false, final false
inline float_t _ToEaseFunction_b__4_6(float_t  time, float_t  duration, float_t  overshootOrAmplitude, float_t  period) ;

/// @brief Method <ToEaseFunction>b__4_7, addr 0x18ecc80, size 0x10, virtual false, abstract: false, final false
inline float_t _ToEaseFunction_b__4_7(float_t  time, float_t  duration, float_t  overshootOrAmplitude, float_t  period) ;

/// @brief Method <ToEaseFunction>b__4_8, addr 0x18ecc90, size 0x20, virtual false, abstract: false, final false
inline float_t _ToEaseFunction_b__4_8(float_t  time, float_t  duration, float_t  overshootOrAmplitude, float_t  period) ;

/// @brief Method <ToEaseFunction>b__4_9, addr 0x18eccb0, size 0x48, virtual false, abstract: false, final false
inline float_t _ToEaseFunction_b__4_9(float_t  time, float_t  duration, float_t  overshootOrAmplitude, float_t  period) ;

/// @brief Method .ctor, addr 0x18eca88, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::DG::Tweening::Core::Easing::EaseManager___c* getStaticF___9() ;

static inline ::DG::Tweening::EaseFunction* getStaticF___9__4_0() ;

static inline ::DG::Tweening::EaseFunction* getStaticF___9__4_1() ;

static inline ::DG::Tweening::EaseFunction* getStaticF___9__4_10() ;

static inline ::DG::Tweening::EaseFunction* getStaticF___9__4_11() ;

static inline ::DG::Tweening::EaseFunction* getStaticF___9__4_12() ;

static inline ::DG::Tweening::EaseFunction* getStaticF___9__4_13() ;

static inline ::DG::Tweening::EaseFunction* getStaticF___9__4_14() ;

static inline ::DG::Tweening::EaseFunction* getStaticF___9__4_15() ;

static inline ::DG::Tweening::EaseFunction* getStaticF___9__4_16() ;

static inline ::DG::Tweening::EaseFunction* getStaticF___9__4_17() ;

static inline ::DG::Tweening::EaseFunction* getStaticF___9__4_18() ;

static inline ::DG::Tweening::EaseFunction* getStaticF___9__4_19() ;

static inline ::DG::Tweening::EaseFunction* getStaticF___9__4_2() ;

static inline ::DG::Tweening::EaseFunction* getStaticF___9__4_20() ;

static inline ::DG::Tweening::EaseFunction* getStaticF___9__4_21() ;

static inline ::DG::Tweening::EaseFunction* getStaticF___9__4_22() ;

static inline ::DG::Tweening::EaseFunction* getStaticF___9__4_23() ;

static inline ::DG::Tweening::EaseFunction* getStaticF___9__4_24() ;

static inline ::DG::Tweening::EaseFunction* getStaticF___9__4_25() ;

static inline ::DG::Tweening::EaseFunction* getStaticF___9__4_26() ;

static inline ::DG::Tweening::EaseFunction* getStaticF___9__4_27() ;

static inline ::DG::Tweening::EaseFunction* getStaticF___9__4_28() ;

static inline ::DG::Tweening::EaseFunction* getStaticF___9__4_29() ;

static inline ::DG::Tweening::EaseFunction* getStaticF___9__4_3() ;

static inline ::DG::Tweening::EaseFunction* getStaticF___9__4_30() ;

static inline ::DG::Tweening::EaseFunction* getStaticF___9__4_31() ;

static inline ::DG::Tweening::EaseFunction* getStaticF___9__4_32() ;

static inline ::DG::Tweening::EaseFunction* getStaticF___9__4_33() ;

static inline ::DG::Tweening::EaseFunction* getStaticF___9__4_34() ;

static inline ::DG::Tweening::EaseFunction* getStaticF___9__4_35() ;

static inline ::DG::Tweening::EaseFunction* getStaticF___9__4_4() ;

static inline ::DG::Tweening::EaseFunction* getStaticF___9__4_5() ;

static inline ::DG::Tweening::EaseFunction* getStaticF___9__4_6() ;

static inline ::DG::Tweening::EaseFunction* getStaticF___9__4_7() ;

static inline ::DG::Tweening::EaseFunction* getStaticF___9__4_8() ;

static inline ::DG::Tweening::EaseFunction* getStaticF___9__4_9() ;

static inline void setStaticF___9(::DG::Tweening::Core::Easing::EaseManager___c*  value) ;

static inline void setStaticF___9__4_0(::DG::Tweening::EaseFunction*  value) ;

static inline void setStaticF___9__4_1(::DG::Tweening::EaseFunction*  value) ;

static inline void setStaticF___9__4_10(::DG::Tweening::EaseFunction*  value) ;

static inline void setStaticF___9__4_11(::DG::Tweening::EaseFunction*  value) ;

static inline void setStaticF___9__4_12(::DG::Tweening::EaseFunction*  value) ;

static inline void setStaticF___9__4_13(::DG::Tweening::EaseFunction*  value) ;

static inline void setStaticF___9__4_14(::DG::Tweening::EaseFunction*  value) ;

static inline void setStaticF___9__4_15(::DG::Tweening::EaseFunction*  value) ;

static inline void setStaticF___9__4_16(::DG::Tweening::EaseFunction*  value) ;

static inline void setStaticF___9__4_17(::DG::Tweening::EaseFunction*  value) ;

static inline void setStaticF___9__4_18(::DG::Tweening::EaseFunction*  value) ;

static inline void setStaticF___9__4_19(::DG::Tweening::EaseFunction*  value) ;

static inline void setStaticF___9__4_2(::DG::Tweening::EaseFunction*  value) ;

static inline void setStaticF___9__4_20(::DG::Tweening::EaseFunction*  value) ;

static inline void setStaticF___9__4_21(::DG::Tweening::EaseFunction*  value) ;

static inline void setStaticF___9__4_22(::DG::Tweening::EaseFunction*  value) ;

static inline void setStaticF___9__4_23(::DG::Tweening::EaseFunction*  value) ;

static inline void setStaticF___9__4_24(::DG::Tweening::EaseFunction*  value) ;

static inline void setStaticF___9__4_25(::DG::Tweening::EaseFunction*  value) ;

static inline void setStaticF___9__4_26(::DG::Tweening::EaseFunction*  value) ;

static inline void setStaticF___9__4_27(::DG::Tweening::EaseFunction*  value) ;

static inline void setStaticF___9__4_28(::DG::Tweening::EaseFunction*  value) ;

static inline void setStaticF___9__4_29(::DG::Tweening::EaseFunction*  value) ;

static inline void setStaticF___9__4_3(::DG::Tweening::EaseFunction*  value) ;

static inline void setStaticF___9__4_30(::DG::Tweening::EaseFunction*  value) ;

static inline void setStaticF___9__4_31(::DG::Tweening::EaseFunction*  value) ;

static inline void setStaticF___9__4_32(::DG::Tweening::EaseFunction*  value) ;

static inline void setStaticF___9__4_33(::DG::Tweening::EaseFunction*  value) ;

static inline void setStaticF___9__4_34(::DG::Tweening::EaseFunction*  value) ;

static inline void setStaticF___9__4_35(::DG::Tweening::EaseFunction*  value) ;

static inline void setStaticF___9__4_4(::DG::Tweening::EaseFunction*  value) ;

static inline void setStaticF___9__4_5(::DG::Tweening::EaseFunction*  value) ;

static inline void setStaticF___9__4_6(::DG::Tweening::EaseFunction*  value) ;

static inline void setStaticF___9__4_7(::DG::Tweening::EaseFunction*  value) ;

static inline void setStaticF___9__4_8(::DG::Tweening::EaseFunction*  value) ;

static inline void setStaticF___9__4_9(::DG::Tweening::EaseFunction*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EaseManager___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EaseManager___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EaseManager___c(EaseManager___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EaseManager___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EaseManager___c(EaseManager___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10865};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::DG::Tweening::Core::Easing::EaseManager___c, 0x10>, "Size mismatch!");

} // namespace end def DG::Tweening::Core::Easing
// Dependencies System.Object
namespace DG::Tweening::Core::Easing {
// Is value type: false
// CS Name: DG.Tweening.Core.Easing.EaseManager
class CORDL_TYPE EaseManager : public ::System::Object {
public:
// Declarations
using __c = ::DG::Tweening::Core::Easing::EaseManager___c;

/// @brief Method Evaluate, addr 0x18ea8f0, size 0xa40, virtual false, abstract: false, final false
static inline float_t Evaluate(::DG::Tweening::Ease  easeType, ::DG::Tweening::EaseFunction*  customEase, float_t  time, float_t  duration, float_t  overshootOrAmplitude, float_t  period) ;

/// @brief Method Evaluate, addr 0x18ea8d0, size 0x20, virtual false, abstract: false, final false
static inline float_t Evaluate(::DG::Tweening::Tween*  t, float_t  time, float_t  duration, float_t  overshootOrAmplitude, float_t  period) ;

/// @brief Method IsFlashEase, addr 0x18eca1c, size 0x10, virtual false, abstract: false, final false
static inline bool IsFlashEase(::DG::Tweening::Ease  ease) ;

/// @brief Method ToEaseFunction, addr 0x18eb694, size 0x1388, virtual false, abstract: false, final false
static inline ::DG::Tweening::EaseFunction* ToEaseFunction(::DG::Tweening::Ease  ease) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EaseManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EaseManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EaseManager(EaseManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EaseManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EaseManager(EaseManager const& ) = delete;

/// @brief Field _PiOver2 offset 0xffffffff size 0x4
static constexpr float_t  _PiOver2{static_cast<float_t>(1.5707964f)};

/// @brief Field _TwoPi offset 0xffffffff size 0x4
static constexpr float_t  _TwoPi{static_cast<float_t>(6.2831855f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10866};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::DG::Tweening::Core::Easing::EaseManager, 0x10>, "Size mismatch!");

} // namespace end def DG::Tweening::Core::Easing
NEED_NO_BOX(::DG::Tweening::Core::Easing::EaseManager);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::Core::Easing::EaseManager*, "DG.Tweening.Core.Easing", "EaseManager");
NEED_NO_BOX(::DG::Tweening::Core::Easing::EaseManager___c);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::Core::Easing::EaseManager___c*, "DG.Tweening.Core.Easing", "EaseManager/<>c");
