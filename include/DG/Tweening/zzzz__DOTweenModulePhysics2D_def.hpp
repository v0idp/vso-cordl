#pragma once
// IWYU pragma private; include "DG/Tweening/DOTweenModulePhysics2D.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DOTweenModulePhysics2D)
namespace DG::Tweening::Core {
template<typename T1,typename T2,typename TPlugOptions>
class TweenerCore_3;
}
namespace DG::Tweening::Plugins::Options {
struct FloatOptions;
}
namespace DG::Tweening::Plugins::Options {
struct VectorOptions;
}
namespace DG::Tweening {
class DOTweenModulePhysics2D___c__DisplayClass0_0;
}
namespace DG::Tweening {
class DOTweenModulePhysics2D___c__DisplayClass1_0;
}
namespace DG::Tweening {
class DOTweenModulePhysics2D___c__DisplayClass2_0;
}
namespace DG::Tweening {
class DOTweenModulePhysics2D___c__DisplayClass3_0;
}
namespace DG::Tweening {
class DOTweenModulePhysics2D___c__DisplayClass4_0;
}
namespace DG::Tweening {
class Sequence;
}
namespace DG::Tweening {
class Tween;
}
namespace UnityEngine {
class Rigidbody2D;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace DG::Tweening {
class DOTweenModulePhysics2D;
}
namespace DG::Tweening {
class DOTweenModulePhysics2D___c__DisplayClass0_0;
}
namespace DG::Tweening {
class DOTweenModulePhysics2D___c__DisplayClass1_0;
}
namespace DG::Tweening {
class DOTweenModulePhysics2D___c__DisplayClass2_0;
}
namespace DG::Tweening {
class DOTweenModulePhysics2D___c__DisplayClass3_0;
}
namespace DG::Tweening {
class DOTweenModulePhysics2D___c__DisplayClass4_0;
}
// Write type traits
MARK_REF_PTR_T(::DG::Tweening::DOTweenModulePhysics2D);
MARK_REF_PTR_T(::DG::Tweening::DOTweenModulePhysics2D___c__DisplayClass0_0);
MARK_REF_PTR_T(::DG::Tweening::DOTweenModulePhysics2D___c__DisplayClass1_0);
MARK_REF_PTR_T(::DG::Tweening::DOTweenModulePhysics2D___c__DisplayClass2_0);
MARK_REF_PTR_T(::DG::Tweening::DOTweenModulePhysics2D___c__DisplayClass3_0);
MARK_REF_PTR_T(::DG::Tweening::DOTweenModulePhysics2D___c__DisplayClass4_0);
// Dependencies System.Object
namespace DG::Tweening {
// Is value type: false
// CS Name: DG.Tweening.DOTweenModulePhysics2D/<>c__DisplayClass0_0
class CORDL_TYPE DOTweenModulePhysics2D___c__DisplayClass0_0 : public ::System::Object {
public:
// Declarations
/// @brief Field target, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::Rigidbody2D>  target;

static inline ::DG::Tweening::DOTweenModulePhysics2D___c__DisplayClass0_0* New_ctor() ;

/// @brief Method <DOMove>b__0, addr 0x16af450, size 0x1c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 _DOMove_b__0() ;

constexpr ::UnityW<::UnityEngine::Rigidbody2D> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::Rigidbody2D>& __cordl_internal_get_target() ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::Rigidbody2D>  value) ;

/// @brief Method .ctor, addr 0x16aeba0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DOTweenModulePhysics2D___c__DisplayClass0_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModulePhysics2D___c__DisplayClass0_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DOTweenModulePhysics2D___c__DisplayClass0_0(DOTweenModulePhysics2D___c__DisplayClass0_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModulePhysics2D___c__DisplayClass0_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DOTweenModulePhysics2D___c__DisplayClass0_0(DOTweenModulePhysics2D___c__DisplayClass0_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11746};

/// @brief Field target, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody2D>  ___target;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DG::Tweening::DOTweenModulePhysics2D___c__DisplayClass0_0, ___target) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::DG::Tweening::DOTweenModulePhysics2D___c__DisplayClass0_0, 0x18>, "Size mismatch!");

} // namespace end def DG::Tweening
// Dependencies System.Object
namespace DG::Tweening {
// Is value type: false
// CS Name: DG.Tweening.DOTweenModulePhysics2D/<>c__DisplayClass1_0
class CORDL_TYPE DOTweenModulePhysics2D___c__DisplayClass1_0 : public ::System::Object {
public:
// Declarations
/// @brief Field target, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::Rigidbody2D>  target;

static inline ::DG::Tweening::DOTweenModulePhysics2D___c__DisplayClass1_0* New_ctor() ;

/// @brief Method <DOMoveX>b__0, addr 0x16af46c, size 0x1c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 _DOMoveX_b__0() ;

constexpr ::UnityW<::UnityEngine::Rigidbody2D> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::Rigidbody2D>& __cordl_internal_get_target() ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::Rigidbody2D>  value) ;

/// @brief Method .ctor, addr 0x16aed38, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DOTweenModulePhysics2D___c__DisplayClass1_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModulePhysics2D___c__DisplayClass1_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DOTweenModulePhysics2D___c__DisplayClass1_0(DOTweenModulePhysics2D___c__DisplayClass1_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModulePhysics2D___c__DisplayClass1_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DOTweenModulePhysics2D___c__DisplayClass1_0(DOTweenModulePhysics2D___c__DisplayClass1_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11747};

/// @brief Field target, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody2D>  ___target;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DG::Tweening::DOTweenModulePhysics2D___c__DisplayClass1_0, ___target) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::DG::Tweening::DOTweenModulePhysics2D___c__DisplayClass1_0, 0x18>, "Size mismatch!");

} // namespace end def DG::Tweening
// Dependencies System.Object
namespace DG::Tweening {
// Is value type: false
// CS Name: DG.Tweening.DOTweenModulePhysics2D/<>c__DisplayClass2_0
class CORDL_TYPE DOTweenModulePhysics2D___c__DisplayClass2_0 : public ::System::Object {
public:
// Declarations
/// @brief Field target, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::Rigidbody2D>  target;

static inline ::DG::Tweening::DOTweenModulePhysics2D___c__DisplayClass2_0* New_ctor() ;

/// @brief Method <DOMoveY>b__0, addr 0x16af488, size 0x1c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 _DOMoveY_b__0() ;

constexpr ::UnityW<::UnityEngine::Rigidbody2D> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::Rigidbody2D>& __cordl_internal_get_target() ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::Rigidbody2D>  value) ;

/// @brief Method .ctor, addr 0x16aeed0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DOTweenModulePhysics2D___c__DisplayClass2_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModulePhysics2D___c__DisplayClass2_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DOTweenModulePhysics2D___c__DisplayClass2_0(DOTweenModulePhysics2D___c__DisplayClass2_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModulePhysics2D___c__DisplayClass2_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DOTweenModulePhysics2D___c__DisplayClass2_0(DOTweenModulePhysics2D___c__DisplayClass2_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11748};

/// @brief Field target, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody2D>  ___target;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DG::Tweening::DOTweenModulePhysics2D___c__DisplayClass2_0, ___target) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::DG::Tweening::DOTweenModulePhysics2D___c__DisplayClass2_0, 0x18>, "Size mismatch!");

} // namespace end def DG::Tweening
// Dependencies System.Object
namespace DG::Tweening {
// Is value type: false
// CS Name: DG.Tweening.DOTweenModulePhysics2D/<>c__DisplayClass3_0
class CORDL_TYPE DOTweenModulePhysics2D___c__DisplayClass3_0 : public ::System::Object {
public:
// Declarations
/// @brief Field target, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::Rigidbody2D>  target;

static inline ::DG::Tweening::DOTweenModulePhysics2D___c__DisplayClass3_0* New_ctor() ;

/// @brief Method <DORotate>b__0, addr 0x16af4a4, size 0x1c, virtual false, abstract: false, final false
inline float_t _DORotate_b__0() ;

constexpr ::UnityW<::UnityEngine::Rigidbody2D> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::Rigidbody2D>& __cordl_internal_get_target() ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::Rigidbody2D>  value) ;

/// @brief Method .ctor, addr 0x16af050, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DOTweenModulePhysics2D___c__DisplayClass3_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModulePhysics2D___c__DisplayClass3_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DOTweenModulePhysics2D___c__DisplayClass3_0(DOTweenModulePhysics2D___c__DisplayClass3_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModulePhysics2D___c__DisplayClass3_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DOTweenModulePhysics2D___c__DisplayClass3_0(DOTweenModulePhysics2D___c__DisplayClass3_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11749};

/// @brief Field target, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody2D>  ___target;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DG::Tweening::DOTweenModulePhysics2D___c__DisplayClass3_0, ___target) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::DG::Tweening::DOTweenModulePhysics2D___c__DisplayClass3_0, 0x18>, "Size mismatch!");

} // namespace end def DG::Tweening
// Dependencies System.Object, UnityEngine.Vector2
namespace DG::Tweening {
// Is value type: false
// CS Name: DG.Tweening.DOTweenModulePhysics2D/<>c__DisplayClass4_0
class CORDL_TYPE DOTweenModulePhysics2D___c__DisplayClass4_0 : public ::System::Object {
public:
// Declarations
/// @brief Field endValue, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_endValue, put=__cordl_internal_set_endValue)) ::UnityEngine::Vector2  endValue;

/// @brief Field offsetY, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_offsetY, put=__cordl_internal_set_offsetY)) float_t  offsetY;

/// @brief Field offsetYSet, offset 0x1c, size 0x1 
 __declspec(property(get=__cordl_internal_get_offsetYSet, put=__cordl_internal_set_offsetYSet)) bool  offsetYSet;

/// @brief Field s, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_s, put=__cordl_internal_set_s)) ::DG::Tweening::Sequence*  s;

/// @brief Field startPosY, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_startPosY, put=__cordl_internal_set_startPosY)) float_t  startPosY;

/// @brief Field target, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::Rigidbody2D>  target;

/// @brief Field yTween, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_yTween, put=__cordl_internal_set_yTween)) ::DG::Tweening::Tween*  yTween;

static inline ::DG::Tweening::DOTweenModulePhysics2D___c__DisplayClass4_0* New_ctor() ;

/// @brief Method <DOJump>b__0, addr 0x16af4c0, size 0x1c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 _DOJump_b__0() ;

/// @brief Method <DOJump>b__1, addr 0x16af4dc, size 0x1c, virtual false, abstract: false, final false
inline void _DOJump_b__1(::UnityEngine::Vector2  x) ;

/// @brief Method <DOJump>b__2, addr 0x16af4f8, size 0x28, virtual false, abstract: false, final false
inline void _DOJump_b__2() ;

/// @brief Method <DOJump>b__3, addr 0x16af520, size 0x1c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 _DOJump_b__3() ;

/// @brief Method <DOJump>b__4, addr 0x16af53c, size 0x1c, virtual false, abstract: false, final false
inline void _DOJump_b__4(::UnityEngine::Vector2  x) ;

/// @brief Method <DOJump>b__5, addr 0x16af558, size 0xac, virtual false, abstract: false, final false
inline void _DOJump_b__5() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_endValue() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_endValue() ;

constexpr float_t const& __cordl_internal_get_offsetY() const;

constexpr float_t& __cordl_internal_get_offsetY() ;

constexpr bool const& __cordl_internal_get_offsetYSet() const;

constexpr bool& __cordl_internal_get_offsetYSet() ;

constexpr ::DG::Tweening::Sequence* const& __cordl_internal_get_s() const;

constexpr ::DG::Tweening::Sequence*& __cordl_internal_get_s() ;

constexpr float_t const& __cordl_internal_get_startPosY() const;

constexpr float_t& __cordl_internal_get_startPosY() ;

constexpr ::UnityW<::UnityEngine::Rigidbody2D> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::Rigidbody2D>& __cordl_internal_get_target() ;

constexpr ::DG::Tweening::Tween* const& __cordl_internal_get_yTween() const;

constexpr ::DG::Tweening::Tween*& __cordl_internal_get_yTween() ;

constexpr void __cordl_internal_set_endValue(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_offsetY(float_t  value) ;

constexpr void __cordl_internal_set_offsetYSet(bool  value) ;

constexpr void __cordl_internal_set_s(::DG::Tweening::Sequence*  value) ;

constexpr void __cordl_internal_set_startPosY(float_t  value) ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::Rigidbody2D>  value) ;

constexpr void __cordl_internal_set_yTween(::DG::Tweening::Tween*  value) ;

/// @brief Method .ctor, addr 0x16af448, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DOTweenModulePhysics2D___c__DisplayClass4_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModulePhysics2D___c__DisplayClass4_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DOTweenModulePhysics2D___c__DisplayClass4_0(DOTweenModulePhysics2D___c__DisplayClass4_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModulePhysics2D___c__DisplayClass4_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DOTweenModulePhysics2D___c__DisplayClass4_0(DOTweenModulePhysics2D___c__DisplayClass4_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11750};

/// @brief Field target, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody2D>  ___target;

/// @brief Field startPosY, offset: 0x18, size: 0x4, def value: None
 float_t  ___startPosY;

/// @brief Field offsetYSet, offset: 0x1c, size: 0x1, def value: None
 bool  ___offsetYSet;

/// @brief Field offsetY, offset: 0x20, size: 0x4, def value: None
 float_t  ___offsetY;

/// @brief Field s, offset: 0x28, size: 0x8, def value: None
 ::DG::Tweening::Sequence*  ___s;

/// @brief Field endValue, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___endValue;

/// @brief Field yTween, offset: 0x38, size: 0x8, def value: None
 ::DG::Tweening::Tween*  ___yTween;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DG::Tweening::DOTweenModulePhysics2D___c__DisplayClass4_0, ___target) == 0x10, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::DOTweenModulePhysics2D___c__DisplayClass4_0, ___startPosY) == 0x18, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::DOTweenModulePhysics2D___c__DisplayClass4_0, ___offsetYSet) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::DOTweenModulePhysics2D___c__DisplayClass4_0, ___offsetY) == 0x20, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::DOTweenModulePhysics2D___c__DisplayClass4_0, ___s) == 0x28, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::DOTweenModulePhysics2D___c__DisplayClass4_0, ___endValue) == 0x30, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::DOTweenModulePhysics2D___c__DisplayClass4_0, ___yTween) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::DG::Tweening::DOTweenModulePhysics2D___c__DisplayClass4_0, 0x40>, "Size mismatch!");

} // namespace end def DG::Tweening
// Dependencies System.Object
namespace DG::Tweening {
// Is value type: false
// CS Name: DG.Tweening.DOTweenModulePhysics2D
class CORDL_TYPE DOTweenModulePhysics2D : public ::System::Object {
public:
// Declarations
using __c__DisplayClass0_0 = ::DG::Tweening::DOTweenModulePhysics2D___c__DisplayClass0_0;

using __c__DisplayClass1_0 = ::DG::Tweening::DOTweenModulePhysics2D___c__DisplayClass1_0;

using __c__DisplayClass2_0 = ::DG::Tweening::DOTweenModulePhysics2D___c__DisplayClass2_0;

using __c__DisplayClass3_0 = ::DG::Tweening::DOTweenModulePhysics2D___c__DisplayClass3_0;

using __c__DisplayClass4_0 = ::DG::Tweening::DOTweenModulePhysics2D___c__DisplayClass4_0;

/// @brief Method DOJump, addr 0x16af058, size 0x3f0, virtual false, abstract: false, final false
static inline ::DG::Tweening::Sequence* DOJump(::UnityEngine::Rigidbody2D*  target, ::UnityEngine::Vector2  endValue, float_t  jumpPower, int32_t  numJumps, float_t  duration, bool  snapping) ;

/// @brief Method DOMove, addr 0x16aea08, size 0x198, virtual false, abstract: false, final false
static inline ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector2,::UnityEngine::Vector2,::DG::Tweening::Plugins::Options::VectorOptions>* DOMove(::UnityEngine::Rigidbody2D*  target, ::UnityEngine::Vector2  endValue, float_t  duration, bool  snapping) ;

/// @brief Method DOMoveX, addr 0x16aeba8, size 0x190, virtual false, abstract: false, final false
static inline ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector2,::UnityEngine::Vector2,::DG::Tweening::Plugins::Options::VectorOptions>* DOMoveX(::UnityEngine::Rigidbody2D*  target, float_t  endValue, float_t  duration, bool  snapping) ;

/// @brief Method DOMoveY, addr 0x16aed40, size 0x190, virtual false, abstract: false, final false
static inline ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector2,::UnityEngine::Vector2,::DG::Tweening::Plugins::Options::VectorOptions>* DOMoveY(::UnityEngine::Rigidbody2D*  target, float_t  endValue, float_t  duration, bool  snapping) ;

/// @brief Method DORotate, addr 0x16aeed8, size 0x178, virtual false, abstract: false, final false
static inline ::DG::Tweening::Core::TweenerCore_3<float_t,float_t,::DG::Tweening::Plugins::Options::FloatOptions>* DORotate(::UnityEngine::Rigidbody2D*  target, float_t  endValue, float_t  duration) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DOTweenModulePhysics2D() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModulePhysics2D", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DOTweenModulePhysics2D(DOTweenModulePhysics2D && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModulePhysics2D", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DOTweenModulePhysics2D(DOTweenModulePhysics2D const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11751};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::DG::Tweening::DOTweenModulePhysics2D, 0x10>, "Size mismatch!");

} // namespace end def DG::Tweening
NEED_NO_BOX(::DG::Tweening::DOTweenModulePhysics2D);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::DOTweenModulePhysics2D*, "DG.Tweening", "DOTweenModulePhysics2D");
NEED_NO_BOX(::DG::Tweening::DOTweenModulePhysics2D___c__DisplayClass0_0);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::DOTweenModulePhysics2D___c__DisplayClass0_0*, "DG.Tweening", "DOTweenModulePhysics2D/<>c__DisplayClass0_0");
NEED_NO_BOX(::DG::Tweening::DOTweenModulePhysics2D___c__DisplayClass1_0);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::DOTweenModulePhysics2D___c__DisplayClass1_0*, "DG.Tweening", "DOTweenModulePhysics2D/<>c__DisplayClass1_0");
NEED_NO_BOX(::DG::Tweening::DOTweenModulePhysics2D___c__DisplayClass2_0);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::DOTweenModulePhysics2D___c__DisplayClass2_0*, "DG.Tweening", "DOTweenModulePhysics2D/<>c__DisplayClass2_0");
NEED_NO_BOX(::DG::Tweening::DOTweenModulePhysics2D___c__DisplayClass3_0);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::DOTweenModulePhysics2D___c__DisplayClass3_0*, "DG.Tweening", "DOTweenModulePhysics2D/<>c__DisplayClass3_0");
NEED_NO_BOX(::DG::Tweening::DOTweenModulePhysics2D___c__DisplayClass4_0);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::DOTweenModulePhysics2D___c__DisplayClass4_0*, "DG.Tweening", "DOTweenModulePhysics2D/<>c__DisplayClass4_0");
