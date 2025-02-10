#pragma once
// IWYU pragma private; include "DG/Tweening/DOTweenModulePhysics.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DOTweenModulePhysics)
namespace DG::Tweening::Core {
template<typename T1,typename T2,typename TPlugOptions>
class TweenerCore_3;
}
namespace DG::Tweening::Plugins::Core::PathCore {
class Path;
}
namespace DG::Tweening::Plugins::Options {
struct PathOptions;
}
namespace DG::Tweening::Plugins::Options {
struct QuaternionOptions;
}
namespace DG::Tweening::Plugins::Options {
struct VectorOptions;
}
namespace DG::Tweening {
struct AxisConstraint;
}
namespace DG::Tweening {
class DOTweenModulePhysics___c__DisplayClass0_0;
}
namespace DG::Tweening {
class DOTweenModulePhysics___c__DisplayClass10_0;
}
namespace DG::Tweening {
class DOTweenModulePhysics___c__DisplayClass1_0;
}
namespace DG::Tweening {
class DOTweenModulePhysics___c__DisplayClass2_0;
}
namespace DG::Tweening {
class DOTweenModulePhysics___c__DisplayClass3_0;
}
namespace DG::Tweening {
class DOTweenModulePhysics___c__DisplayClass4_0;
}
namespace DG::Tweening {
class DOTweenModulePhysics___c__DisplayClass5_0;
}
namespace DG::Tweening {
class DOTweenModulePhysics___c__DisplayClass6_0;
}
namespace DG::Tweening {
class DOTweenModulePhysics___c__DisplayClass7_0;
}
namespace DG::Tweening {
class DOTweenModulePhysics___c__DisplayClass8_0;
}
namespace DG::Tweening {
class DOTweenModulePhysics___c__DisplayClass9_0;
}
namespace DG::Tweening {
struct PathMode;
}
namespace DG::Tweening {
struct PathType;
}
namespace DG::Tweening {
struct RotateMode;
}
namespace DG::Tweening {
class Sequence;
}
namespace DG::Tweening {
class Tween;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Rigidbody;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace DG::Tweening {
class DOTweenModulePhysics;
}
namespace DG::Tweening {
class DOTweenModulePhysics___c__DisplayClass0_0;
}
namespace DG::Tweening {
class DOTweenModulePhysics___c__DisplayClass10_0;
}
namespace DG::Tweening {
class DOTweenModulePhysics___c__DisplayClass1_0;
}
namespace DG::Tweening {
class DOTweenModulePhysics___c__DisplayClass2_0;
}
namespace DG::Tweening {
class DOTweenModulePhysics___c__DisplayClass3_0;
}
namespace DG::Tweening {
class DOTweenModulePhysics___c__DisplayClass4_0;
}
namespace DG::Tweening {
class DOTweenModulePhysics___c__DisplayClass5_0;
}
namespace DG::Tweening {
class DOTweenModulePhysics___c__DisplayClass6_0;
}
namespace DG::Tweening {
class DOTweenModulePhysics___c__DisplayClass7_0;
}
namespace DG::Tweening {
class DOTweenModulePhysics___c__DisplayClass8_0;
}
namespace DG::Tweening {
class DOTweenModulePhysics___c__DisplayClass9_0;
}
// Write type traits
MARK_REF_PTR_T(::DG::Tweening::DOTweenModulePhysics);
MARK_REF_PTR_T(::DG::Tweening::DOTweenModulePhysics___c__DisplayClass0_0);
MARK_REF_PTR_T(::DG::Tweening::DOTweenModulePhysics___c__DisplayClass10_0);
MARK_REF_PTR_T(::DG::Tweening::DOTweenModulePhysics___c__DisplayClass1_0);
MARK_REF_PTR_T(::DG::Tweening::DOTweenModulePhysics___c__DisplayClass2_0);
MARK_REF_PTR_T(::DG::Tweening::DOTweenModulePhysics___c__DisplayClass3_0);
MARK_REF_PTR_T(::DG::Tweening::DOTweenModulePhysics___c__DisplayClass4_0);
MARK_REF_PTR_T(::DG::Tweening::DOTweenModulePhysics___c__DisplayClass5_0);
MARK_REF_PTR_T(::DG::Tweening::DOTweenModulePhysics___c__DisplayClass6_0);
MARK_REF_PTR_T(::DG::Tweening::DOTweenModulePhysics___c__DisplayClass7_0);
MARK_REF_PTR_T(::DG::Tweening::DOTweenModulePhysics___c__DisplayClass8_0);
MARK_REF_PTR_T(::DG::Tweening::DOTweenModulePhysics___c__DisplayClass9_0);
// Dependencies System.Object
namespace DG::Tweening {
// Is value type: false
// CS Name: DG.Tweening.DOTweenModulePhysics/<>c__DisplayClass0_0
class CORDL_TYPE DOTweenModulePhysics___c__DisplayClass0_0 : public ::System::Object {
public:
// Declarations
/// @brief Field target, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::Rigidbody>  target;

static inline ::DG::Tweening::DOTweenModulePhysics___c__DisplayClass0_0* New_ctor() ;

/// @brief Method <DOMove>b__0, addr 0x16ae5e8, size 0x1c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 _DOMove_b__0() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_target() ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::Rigidbody>  value) ;

/// @brief Method .ctor, addr 0x16ad048, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DOTweenModulePhysics___c__DisplayClass0_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModulePhysics___c__DisplayClass0_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DOTweenModulePhysics___c__DisplayClass0_0(DOTweenModulePhysics___c__DisplayClass0_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModulePhysics___c__DisplayClass0_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DOTweenModulePhysics___c__DisplayClass0_0(DOTweenModulePhysics___c__DisplayClass0_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11734};

/// @brief Field target, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ___target;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DG::Tweening::DOTweenModulePhysics___c__DisplayClass0_0, ___target) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::DG::Tweening::DOTweenModulePhysics___c__DisplayClass0_0, 0x18>, "Size mismatch!");

} // namespace end def DG::Tweening
// Dependencies System.Object
namespace DG::Tweening {
// Is value type: false
// CS Name: DG.Tweening.DOTweenModulePhysics/<>c__DisplayClass10_0
class CORDL_TYPE DOTweenModulePhysics___c__DisplayClass10_0 : public ::System::Object {
public:
// Declarations
/// @brief Field target, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::Rigidbody>  target;

/// @brief Field trans, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_trans, put=__cordl_internal_set_trans)) ::UnityW<::UnityEngine::Transform>  trans;

static inline ::DG::Tweening::DOTweenModulePhysics___c__DisplayClass10_0* New_ctor() ;

/// @brief Method <DOLocalPath>b__0, addr 0x16ae604, size 0x1c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 _DOLocalPath_b__0() ;

/// @brief Method <DOLocalPath>b__1, addr 0x16ae620, size 0xec, virtual false, abstract: false, final false
inline void _DOLocalPath_b__1(::UnityEngine::Vector3  x) ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_target() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_trans() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_trans() ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set_trans(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x16ae5e0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DOTweenModulePhysics___c__DisplayClass10_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModulePhysics___c__DisplayClass10_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DOTweenModulePhysics___c__DisplayClass10_0(DOTweenModulePhysics___c__DisplayClass10_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModulePhysics___c__DisplayClass10_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DOTweenModulePhysics___c__DisplayClass10_0(DOTweenModulePhysics___c__DisplayClass10_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11735};

/// @brief Field trans, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___trans;

/// @brief Field target, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ___target;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DG::Tweening::DOTweenModulePhysics___c__DisplayClass10_0, ___trans) == 0x10, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::DOTweenModulePhysics___c__DisplayClass10_0, ___target) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::DG::Tweening::DOTweenModulePhysics___c__DisplayClass10_0, 0x20>, "Size mismatch!");

} // namespace end def DG::Tweening
// Dependencies System.Object
namespace DG::Tweening {
// Is value type: false
// CS Name: DG.Tweening.DOTweenModulePhysics/<>c__DisplayClass1_0
class CORDL_TYPE DOTweenModulePhysics___c__DisplayClass1_0 : public ::System::Object {
public:
// Declarations
/// @brief Field target, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::Rigidbody>  target;

static inline ::DG::Tweening::DOTweenModulePhysics___c__DisplayClass1_0* New_ctor() ;

/// @brief Method <DOMoveX>b__0, addr 0x16ae70c, size 0x1c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 _DOMoveX_b__0() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_target() ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::Rigidbody>  value) ;

/// @brief Method .ctor, addr 0x16ad1e4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DOTweenModulePhysics___c__DisplayClass1_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModulePhysics___c__DisplayClass1_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DOTweenModulePhysics___c__DisplayClass1_0(DOTweenModulePhysics___c__DisplayClass1_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModulePhysics___c__DisplayClass1_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DOTweenModulePhysics___c__DisplayClass1_0(DOTweenModulePhysics___c__DisplayClass1_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11736};

/// @brief Field target, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ___target;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DG::Tweening::DOTweenModulePhysics___c__DisplayClass1_0, ___target) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::DG::Tweening::DOTweenModulePhysics___c__DisplayClass1_0, 0x18>, "Size mismatch!");

} // namespace end def DG::Tweening
// Dependencies System.Object
namespace DG::Tweening {
// Is value type: false
// CS Name: DG.Tweening.DOTweenModulePhysics/<>c__DisplayClass2_0
class CORDL_TYPE DOTweenModulePhysics___c__DisplayClass2_0 : public ::System::Object {
public:
// Declarations
/// @brief Field target, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::Rigidbody>  target;

static inline ::DG::Tweening::DOTweenModulePhysics___c__DisplayClass2_0* New_ctor() ;

/// @brief Method <DOMoveY>b__0, addr 0x16ae728, size 0x1c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 _DOMoveY_b__0() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_target() ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::Rigidbody>  value) ;

/// @brief Method .ctor, addr 0x16ad380, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DOTweenModulePhysics___c__DisplayClass2_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModulePhysics___c__DisplayClass2_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DOTweenModulePhysics___c__DisplayClass2_0(DOTweenModulePhysics___c__DisplayClass2_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModulePhysics___c__DisplayClass2_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DOTweenModulePhysics___c__DisplayClass2_0(DOTweenModulePhysics___c__DisplayClass2_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11737};

/// @brief Field target, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ___target;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DG::Tweening::DOTweenModulePhysics___c__DisplayClass2_0, ___target) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::DG::Tweening::DOTweenModulePhysics___c__DisplayClass2_0, 0x18>, "Size mismatch!");

} // namespace end def DG::Tweening
// Dependencies System.Object
namespace DG::Tweening {
// Is value type: false
// CS Name: DG.Tweening.DOTweenModulePhysics/<>c__DisplayClass3_0
class CORDL_TYPE DOTweenModulePhysics___c__DisplayClass3_0 : public ::System::Object {
public:
// Declarations
/// @brief Field target, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::Rigidbody>  target;

static inline ::DG::Tweening::DOTweenModulePhysics___c__DisplayClass3_0* New_ctor() ;

/// @brief Method <DOMoveZ>b__0, addr 0x16ae744, size 0x1c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 _DOMoveZ_b__0() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_target() ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::Rigidbody>  value) ;

/// @brief Method .ctor, addr 0x16ad51c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DOTweenModulePhysics___c__DisplayClass3_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModulePhysics___c__DisplayClass3_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DOTweenModulePhysics___c__DisplayClass3_0(DOTweenModulePhysics___c__DisplayClass3_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModulePhysics___c__DisplayClass3_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DOTweenModulePhysics___c__DisplayClass3_0(DOTweenModulePhysics___c__DisplayClass3_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11738};

/// @brief Field target, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ___target;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DG::Tweening::DOTweenModulePhysics___c__DisplayClass3_0, ___target) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::DG::Tweening::DOTweenModulePhysics___c__DisplayClass3_0, 0x18>, "Size mismatch!");

} // namespace end def DG::Tweening
// Dependencies System.Object
namespace DG::Tweening {
// Is value type: false
// CS Name: DG.Tweening.DOTweenModulePhysics/<>c__DisplayClass4_0
class CORDL_TYPE DOTweenModulePhysics___c__DisplayClass4_0 : public ::System::Object {
public:
// Declarations
/// @brief Field target, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::Rigidbody>  target;

static inline ::DG::Tweening::DOTweenModulePhysics___c__DisplayClass4_0* New_ctor() ;

/// @brief Method <DORotate>b__0, addr 0x16ae760, size 0x1c, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion _DORotate_b__0() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_target() ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::Rigidbody>  value) ;

/// @brief Method .ctor, addr 0x16ad6c0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DOTweenModulePhysics___c__DisplayClass4_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModulePhysics___c__DisplayClass4_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DOTweenModulePhysics___c__DisplayClass4_0(DOTweenModulePhysics___c__DisplayClass4_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModulePhysics___c__DisplayClass4_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DOTweenModulePhysics___c__DisplayClass4_0(DOTweenModulePhysics___c__DisplayClass4_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11739};

/// @brief Field target, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ___target;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DG::Tweening::DOTweenModulePhysics___c__DisplayClass4_0, ___target) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::DG::Tweening::DOTweenModulePhysics___c__DisplayClass4_0, 0x18>, "Size mismatch!");

} // namespace end def DG::Tweening
// Dependencies System.Object
namespace DG::Tweening {
// Is value type: false
// CS Name: DG.Tweening.DOTweenModulePhysics/<>c__DisplayClass5_0
class CORDL_TYPE DOTweenModulePhysics___c__DisplayClass5_0 : public ::System::Object {
public:
// Declarations
/// @brief Field target, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::Rigidbody>  target;

static inline ::DG::Tweening::DOTweenModulePhysics___c__DisplayClass5_0* New_ctor() ;

/// @brief Method <DOLookAt>b__0, addr 0x16ae77c, size 0x1c, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion _DOLookAt_b__0() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_target() ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::Rigidbody>  value) ;

/// @brief Method .ctor, addr 0x16ad918, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DOTweenModulePhysics___c__DisplayClass5_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModulePhysics___c__DisplayClass5_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DOTweenModulePhysics___c__DisplayClass5_0(DOTweenModulePhysics___c__DisplayClass5_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModulePhysics___c__DisplayClass5_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DOTweenModulePhysics___c__DisplayClass5_0(DOTweenModulePhysics___c__DisplayClass5_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11740};

/// @brief Field target, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ___target;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DG::Tweening::DOTweenModulePhysics___c__DisplayClass5_0, ___target) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::DG::Tweening::DOTweenModulePhysics___c__DisplayClass5_0, 0x18>, "Size mismatch!");

} // namespace end def DG::Tweening
// Dependencies System.Object, UnityEngine.Vector3
namespace DG::Tweening {
// Is value type: false
// CS Name: DG.Tweening.DOTweenModulePhysics/<>c__DisplayClass6_0
class CORDL_TYPE DOTweenModulePhysics___c__DisplayClass6_0 : public ::System::Object {
public:
// Declarations
/// @brief Field endValue, offset 0x30, size 0xc 
 __declspec(property(get=__cordl_internal_get_endValue, put=__cordl_internal_set_endValue)) ::UnityEngine::Vector3  endValue;

/// @brief Field offsetY, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_offsetY, put=__cordl_internal_set_offsetY)) float_t  offsetY;

/// @brief Field offsetYSet, offset 0x1c, size 0x1 
 __declspec(property(get=__cordl_internal_get_offsetYSet, put=__cordl_internal_set_offsetYSet)) bool  offsetYSet;

/// @brief Field s, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_s, put=__cordl_internal_set_s)) ::DG::Tweening::Sequence*  s;

/// @brief Field startPosY, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_startPosY, put=__cordl_internal_set_startPosY)) float_t  startPosY;

/// @brief Field target, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::Rigidbody>  target;

/// @brief Field yTween, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_yTween, put=__cordl_internal_set_yTween)) ::DG::Tweening::Tween*  yTween;

static inline ::DG::Tweening::DOTweenModulePhysics___c__DisplayClass6_0* New_ctor() ;

/// @brief Method <DOJump>b__0, addr 0x16ae798, size 0x1c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 _DOJump_b__0() ;

/// @brief Method <DOJump>b__1, addr 0x16ae7b4, size 0x28, virtual false, abstract: false, final false
inline void _DOJump_b__1() ;

/// @brief Method <DOJump>b__2, addr 0x16ae7dc, size 0x1c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 _DOJump_b__2() ;

/// @brief Method <DOJump>b__3, addr 0x16ae7f8, size 0x1c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 _DOJump_b__3() ;

/// @brief Method <DOJump>b__4, addr 0x16ae814, size 0xb4, virtual false, abstract: false, final false
inline void _DOJump_b__4() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_endValue() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_endValue() ;

constexpr float_t const& __cordl_internal_get_offsetY() const;

constexpr float_t& __cordl_internal_get_offsetY() ;

constexpr bool const& __cordl_internal_get_offsetYSet() const;

constexpr bool& __cordl_internal_get_offsetYSet() ;

constexpr ::DG::Tweening::Sequence* const& __cordl_internal_get_s() const;

constexpr ::DG::Tweening::Sequence*& __cordl_internal_get_s() ;

constexpr float_t const& __cordl_internal_get_startPosY() const;

constexpr float_t& __cordl_internal_get_startPosY() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_target() ;

constexpr ::DG::Tweening::Tween* const& __cordl_internal_get_yTween() const;

constexpr ::DG::Tweening::Tween*& __cordl_internal_get_yTween() ;

constexpr void __cordl_internal_set_endValue(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_offsetY(float_t  value) ;

constexpr void __cordl_internal_set_offsetYSet(bool  value) ;

constexpr void __cordl_internal_set_s(::DG::Tweening::Sequence*  value) ;

constexpr void __cordl_internal_set_startPosY(float_t  value) ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set_yTween(::DG::Tweening::Tween*  value) ;

/// @brief Method .ctor, addr 0x16addbc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DOTweenModulePhysics___c__DisplayClass6_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModulePhysics___c__DisplayClass6_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DOTweenModulePhysics___c__DisplayClass6_0(DOTweenModulePhysics___c__DisplayClass6_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModulePhysics___c__DisplayClass6_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DOTweenModulePhysics___c__DisplayClass6_0(DOTweenModulePhysics___c__DisplayClass6_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11741};

/// @brief Field target, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ___target;

/// @brief Field startPosY, offset: 0x18, size: 0x4, def value: None
 float_t  ___startPosY;

/// @brief Field offsetYSet, offset: 0x1c, size: 0x1, def value: None
 bool  ___offsetYSet;

/// @brief Field offsetY, offset: 0x20, size: 0x4, def value: None
 float_t  ___offsetY;

/// @brief Field s, offset: 0x28, size: 0x8, def value: None
 ::DG::Tweening::Sequence*  ___s;

/// @brief Field endValue, offset: 0x30, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___endValue;

/// @brief Field yTween, offset: 0x40, size: 0x8, def value: None
 ::DG::Tweening::Tween*  ___yTween;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DG::Tweening::DOTweenModulePhysics___c__DisplayClass6_0, ___target) == 0x10, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::DOTweenModulePhysics___c__DisplayClass6_0, ___startPosY) == 0x18, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::DOTweenModulePhysics___c__DisplayClass6_0, ___offsetYSet) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::DOTweenModulePhysics___c__DisplayClass6_0, ___offsetY) == 0x20, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::DOTweenModulePhysics___c__DisplayClass6_0, ___s) == 0x28, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::DOTweenModulePhysics___c__DisplayClass6_0, ___endValue) == 0x30, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::DOTweenModulePhysics___c__DisplayClass6_0, ___yTween) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::DG::Tweening::DOTweenModulePhysics___c__DisplayClass6_0, 0x48>, "Size mismatch!");

} // namespace end def DG::Tweening
// Dependencies System.Object
namespace DG::Tweening {
// Is value type: false
// CS Name: DG.Tweening.DOTweenModulePhysics/<>c__DisplayClass7_0
class CORDL_TYPE DOTweenModulePhysics___c__DisplayClass7_0 : public ::System::Object {
public:
// Declarations
/// @brief Field target, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::Rigidbody>  target;

static inline ::DG::Tweening::DOTweenModulePhysics___c__DisplayClass7_0* New_ctor() ;

/// @brief Method <DOPath>b__0, addr 0x16ae8c8, size 0x1c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 _DOPath_b__0() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_target() ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::Rigidbody>  value) ;

/// @brief Method .ctor, addr 0x16adffc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DOTweenModulePhysics___c__DisplayClass7_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModulePhysics___c__DisplayClass7_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DOTweenModulePhysics___c__DisplayClass7_0(DOTweenModulePhysics___c__DisplayClass7_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModulePhysics___c__DisplayClass7_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DOTweenModulePhysics___c__DisplayClass7_0(DOTweenModulePhysics___c__DisplayClass7_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11742};

/// @brief Field target, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ___target;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DG::Tweening::DOTweenModulePhysics___c__DisplayClass7_0, ___target) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::DG::Tweening::DOTweenModulePhysics___c__DisplayClass7_0, 0x18>, "Size mismatch!");

} // namespace end def DG::Tweening
// Dependencies System.Object
namespace DG::Tweening {
// Is value type: false
// CS Name: DG.Tweening.DOTweenModulePhysics/<>c__DisplayClass8_0
class CORDL_TYPE DOTweenModulePhysics___c__DisplayClass8_0 : public ::System::Object {
public:
// Declarations
/// @brief Field target, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::Rigidbody>  target;

/// @brief Field trans, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_trans, put=__cordl_internal_set_trans)) ::UnityW<::UnityEngine::Transform>  trans;

static inline ::DG::Tweening::DOTweenModulePhysics___c__DisplayClass8_0* New_ctor() ;

/// @brief Method <DOLocalPath>b__0, addr 0x16ae8e4, size 0x1c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 _DOLocalPath_b__0() ;

/// @brief Method <DOLocalPath>b__1, addr 0x16ae900, size 0xec, virtual false, abstract: false, final false
inline void _DOLocalPath_b__1(::UnityEngine::Vector3  x) ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_target() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_trans() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_trans() ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set_trans(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x16ae254, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DOTweenModulePhysics___c__DisplayClass8_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModulePhysics___c__DisplayClass8_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DOTweenModulePhysics___c__DisplayClass8_0(DOTweenModulePhysics___c__DisplayClass8_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModulePhysics___c__DisplayClass8_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DOTweenModulePhysics___c__DisplayClass8_0(DOTweenModulePhysics___c__DisplayClass8_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11743};

/// @brief Field trans, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___trans;

/// @brief Field target, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ___target;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DG::Tweening::DOTweenModulePhysics___c__DisplayClass8_0, ___trans) == 0x10, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::DOTweenModulePhysics___c__DisplayClass8_0, ___target) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::DG::Tweening::DOTweenModulePhysics___c__DisplayClass8_0, 0x20>, "Size mismatch!");

} // namespace end def DG::Tweening
// Dependencies System.Object
namespace DG::Tweening {
// Is value type: false
// CS Name: DG.Tweening.DOTweenModulePhysics/<>c__DisplayClass9_0
class CORDL_TYPE DOTweenModulePhysics___c__DisplayClass9_0 : public ::System::Object {
public:
// Declarations
/// @brief Field target, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::Rigidbody>  target;

static inline ::DG::Tweening::DOTweenModulePhysics___c__DisplayClass9_0* New_ctor() ;

/// @brief Method <DOPath>b__0, addr 0x16ae9ec, size 0x1c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 _DOPath_b__0() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_target() ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::Rigidbody>  value) ;

/// @brief Method .ctor, addr 0x16ae410, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DOTweenModulePhysics___c__DisplayClass9_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModulePhysics___c__DisplayClass9_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DOTweenModulePhysics___c__DisplayClass9_0(DOTweenModulePhysics___c__DisplayClass9_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModulePhysics___c__DisplayClass9_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DOTweenModulePhysics___c__DisplayClass9_0(DOTweenModulePhysics___c__DisplayClass9_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11744};

/// @brief Field target, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ___target;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DG::Tweening::DOTweenModulePhysics___c__DisplayClass9_0, ___target) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::DG::Tweening::DOTweenModulePhysics___c__DisplayClass9_0, 0x18>, "Size mismatch!");

} // namespace end def DG::Tweening
// Dependencies System.Object
namespace DG::Tweening {
// Is value type: false
// CS Name: DG.Tweening.DOTweenModulePhysics
class CORDL_TYPE DOTweenModulePhysics : public ::System::Object {
public:
// Declarations
using __c__DisplayClass0_0 = ::DG::Tweening::DOTweenModulePhysics___c__DisplayClass0_0;

using __c__DisplayClass10_0 = ::DG::Tweening::DOTweenModulePhysics___c__DisplayClass10_0;

using __c__DisplayClass1_0 = ::DG::Tweening::DOTweenModulePhysics___c__DisplayClass1_0;

using __c__DisplayClass2_0 = ::DG::Tweening::DOTweenModulePhysics___c__DisplayClass2_0;

using __c__DisplayClass3_0 = ::DG::Tweening::DOTweenModulePhysics___c__DisplayClass3_0;

using __c__DisplayClass4_0 = ::DG::Tweening::DOTweenModulePhysics___c__DisplayClass4_0;

using __c__DisplayClass5_0 = ::DG::Tweening::DOTweenModulePhysics___c__DisplayClass5_0;

using __c__DisplayClass6_0 = ::DG::Tweening::DOTweenModulePhysics___c__DisplayClass6_0;

using __c__DisplayClass7_0 = ::DG::Tweening::DOTweenModulePhysics___c__DisplayClass7_0;

using __c__DisplayClass8_0 = ::DG::Tweening::DOTweenModulePhysics___c__DisplayClass8_0;

using __c__DisplayClass9_0 = ::DG::Tweening::DOTweenModulePhysics___c__DisplayClass9_0;

/// @brief Method DOJump, addr 0x16ad920, size 0x49c, virtual false, abstract: false, final false
static inline ::DG::Tweening::Sequence* DOJump(::UnityEngine::Rigidbody*  target, ::UnityEngine::Vector3  endValue, float_t  jumpPower, int32_t  numJumps, float_t  duration, bool  snapping) ;

/// @brief Method DOLocalPath, addr 0x16ae004, size 0x250, virtual false, abstract: false, final false
static inline ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3,::DG::Tweening::Plugins::Core::PathCore::Path*,::DG::Tweening::Plugins::Options::PathOptions>* DOLocalPath(::UnityEngine::Rigidbody*  target, ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  path, float_t  duration, ::DG::Tweening::PathType  pathType, ::DG::Tweening::PathMode  pathMode, int32_t  resolution, ::System::Nullable_1<::UnityEngine::Color>  gizmoColor) ;

/// @brief Method DOLocalPath, addr 0x16ae418, size 0x1c8, virtual false, abstract: false, final false
static inline ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3,::DG::Tweening::Plugins::Core::PathCore::Path*,::DG::Tweening::Plugins::Options::PathOptions>* DOLocalPath(::UnityEngine::Rigidbody*  target, ::DG::Tweening::Plugins::Core::PathCore::Path*  path, float_t  duration, ::DG::Tweening::PathMode  pathMode) ;

/// @brief Method DOLookAt, addr 0x16ad6c8, size 0x250, virtual false, abstract: false, final false
static inline ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Quaternion,::UnityEngine::Vector3,::DG::Tweening::Plugins::Options::QuaternionOptions>* DOLookAt(::UnityEngine::Rigidbody*  target, ::UnityEngine::Vector3  towards, float_t  duration, ::DG::Tweening::AxisConstraint  axisConstraint, ::System::Nullable_1<::UnityEngine::Vector3>  up) ;

/// @brief Method DOMove, addr 0x16acea8, size 0x1a0, virtual false, abstract: false, final false
static inline ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3,::UnityEngine::Vector3,::DG::Tweening::Plugins::Options::VectorOptions>* DOMove(::UnityEngine::Rigidbody*  target, ::UnityEngine::Vector3  endValue, float_t  duration, bool  snapping) ;

/// @brief Method DOMoveX, addr 0x16ad050, size 0x194, virtual false, abstract: false, final false
static inline ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3,::UnityEngine::Vector3,::DG::Tweening::Plugins::Options::VectorOptions>* DOMoveX(::UnityEngine::Rigidbody*  target, float_t  endValue, float_t  duration, bool  snapping) ;

/// @brief Method DOMoveY, addr 0x16ad1ec, size 0x194, virtual false, abstract: false, final false
static inline ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3,::UnityEngine::Vector3,::DG::Tweening::Plugins::Options::VectorOptions>* DOMoveY(::UnityEngine::Rigidbody*  target, float_t  endValue, float_t  duration, bool  snapping) ;

/// @brief Method DOMoveZ, addr 0x16ad388, size 0x194, virtual false, abstract: false, final false
static inline ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3,::UnityEngine::Vector3,::DG::Tweening::Plugins::Options::VectorOptions>* DOMoveZ(::UnityEngine::Rigidbody*  target, float_t  endValue, float_t  duration, bool  snapping) ;

/// @brief Method DOPath, addr 0x16addc4, size 0x238, virtual false, abstract: false, final false
static inline ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3,::DG::Tweening::Plugins::Core::PathCore::Path*,::DG::Tweening::Plugins::Options::PathOptions>* DOPath(::UnityEngine::Rigidbody*  target, ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  path, float_t  duration, ::DG::Tweening::PathType  pathType, ::DG::Tweening::PathMode  pathMode, int32_t  resolution, ::System::Nullable_1<::UnityEngine::Color>  gizmoColor) ;

/// @brief Method DOPath, addr 0x16ae25c, size 0x1b4, virtual false, abstract: false, final false
static inline ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3,::DG::Tweening::Plugins::Core::PathCore::Path*,::DG::Tweening::Plugins::Options::PathOptions>* DOPath(::UnityEngine::Rigidbody*  target, ::DG::Tweening::Plugins::Core::PathCore::Path*  path, float_t  duration, ::DG::Tweening::PathMode  pathMode) ;

/// @brief Method DORotate, addr 0x16ad524, size 0x19c, virtual false, abstract: false, final false
static inline ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Quaternion,::UnityEngine::Vector3,::DG::Tweening::Plugins::Options::QuaternionOptions>* DORotate(::UnityEngine::Rigidbody*  target, ::UnityEngine::Vector3  endValue, float_t  duration, ::DG::Tweening::RotateMode  mode) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DOTweenModulePhysics() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModulePhysics", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DOTweenModulePhysics(DOTweenModulePhysics && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModulePhysics", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DOTweenModulePhysics(DOTweenModulePhysics const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11745};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::DG::Tweening::DOTweenModulePhysics, 0x10>, "Size mismatch!");

} // namespace end def DG::Tweening
NEED_NO_BOX(::DG::Tweening::DOTweenModulePhysics);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::DOTweenModulePhysics*, "DG.Tweening", "DOTweenModulePhysics");
NEED_NO_BOX(::DG::Tweening::DOTweenModulePhysics___c__DisplayClass0_0);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::DOTweenModulePhysics___c__DisplayClass0_0*, "DG.Tweening", "DOTweenModulePhysics/<>c__DisplayClass0_0");
NEED_NO_BOX(::DG::Tweening::DOTweenModulePhysics___c__DisplayClass10_0);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::DOTweenModulePhysics___c__DisplayClass10_0*, "DG.Tweening", "DOTweenModulePhysics/<>c__DisplayClass10_0");
NEED_NO_BOX(::DG::Tweening::DOTweenModulePhysics___c__DisplayClass1_0);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::DOTweenModulePhysics___c__DisplayClass1_0*, "DG.Tweening", "DOTweenModulePhysics/<>c__DisplayClass1_0");
NEED_NO_BOX(::DG::Tweening::DOTweenModulePhysics___c__DisplayClass2_0);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::DOTweenModulePhysics___c__DisplayClass2_0*, "DG.Tweening", "DOTweenModulePhysics/<>c__DisplayClass2_0");
NEED_NO_BOX(::DG::Tweening::DOTweenModulePhysics___c__DisplayClass3_0);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::DOTweenModulePhysics___c__DisplayClass3_0*, "DG.Tweening", "DOTweenModulePhysics/<>c__DisplayClass3_0");
NEED_NO_BOX(::DG::Tweening::DOTweenModulePhysics___c__DisplayClass4_0);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::DOTweenModulePhysics___c__DisplayClass4_0*, "DG.Tweening", "DOTweenModulePhysics/<>c__DisplayClass4_0");
NEED_NO_BOX(::DG::Tweening::DOTweenModulePhysics___c__DisplayClass5_0);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::DOTweenModulePhysics___c__DisplayClass5_0*, "DG.Tweening", "DOTweenModulePhysics/<>c__DisplayClass5_0");
NEED_NO_BOX(::DG::Tweening::DOTweenModulePhysics___c__DisplayClass6_0);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::DOTweenModulePhysics___c__DisplayClass6_0*, "DG.Tweening", "DOTweenModulePhysics/<>c__DisplayClass6_0");
NEED_NO_BOX(::DG::Tweening::DOTweenModulePhysics___c__DisplayClass7_0);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::DOTweenModulePhysics___c__DisplayClass7_0*, "DG.Tweening", "DOTweenModulePhysics/<>c__DisplayClass7_0");
NEED_NO_BOX(::DG::Tweening::DOTweenModulePhysics___c__DisplayClass8_0);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::DOTweenModulePhysics___c__DisplayClass8_0*, "DG.Tweening", "DOTweenModulePhysics/<>c__DisplayClass8_0");
NEED_NO_BOX(::DG::Tweening::DOTweenModulePhysics___c__DisplayClass9_0);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::DOTweenModulePhysics___c__DisplayClass9_0*, "DG.Tweening", "DOTweenModulePhysics/<>c__DisplayClass9_0");
