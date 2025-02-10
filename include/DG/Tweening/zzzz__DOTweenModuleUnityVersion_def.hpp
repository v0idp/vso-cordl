#pragma once
// IWYU pragma private; include "DG/Tweening/DOTweenModuleUnityVersion.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DOTweenModuleUnityVersion)
namespace DG::Tweening::Core {
template<typename T1,typename T2,typename TPlugOptions>
class TweenerCore_3;
}
namespace DG::Tweening::Plugins::Options {
struct VectorOptions;
}
namespace DG::Tweening {
class DOTweenModuleUnityVersion___c__DisplayClass8_0;
}
namespace DG::Tweening {
class DOTweenModuleUnityVersion___c__DisplayClass9_0;
}
namespace DG::Tweening {
class Sequence;
}
namespace DG::Tweening {
class Tween;
}
namespace UnityEngine {
class CustomYieldInstruction;
}
namespace UnityEngine {
class Gradient;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace DG::Tweening {
class DOTweenModuleUnityVersion;
}
namespace DG::Tweening {
class DOTweenModuleUnityVersion___c__DisplayClass8_0;
}
namespace DG::Tweening {
class DOTweenModuleUnityVersion___c__DisplayClass9_0;
}
// Write type traits
MARK_REF_PTR_T(::DG::Tweening::DOTweenModuleUnityVersion);
MARK_REF_PTR_T(::DG::Tweening::DOTweenModuleUnityVersion___c__DisplayClass8_0);
MARK_REF_PTR_T(::DG::Tweening::DOTweenModuleUnityVersion___c__DisplayClass9_0);
// Dependencies System.Object
namespace DG::Tweening {
// Is value type: false
// CS Name: DG.Tweening.DOTweenModuleUnityVersion/<>c__DisplayClass8_0
class CORDL_TYPE DOTweenModuleUnityVersion___c__DisplayClass8_0 : public ::System::Object {
public:
// Declarations
/// @brief Field propertyID, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_propertyID, put=__cordl_internal_set_propertyID)) int32_t  propertyID;

/// @brief Field target, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::Material>  target;

static inline ::DG::Tweening::DOTweenModuleUnityVersion___c__DisplayClass8_0* New_ctor() ;

/// @brief Method <DOOffset>b__0, addr 0x16b5cbc, size 0x24, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 _DOOffset_b__0() ;

/// @brief Method <DOOffset>b__1, addr 0x16b5ce0, size 0x24, virtual false, abstract: false, final false
inline void _DOOffset_b__1(::UnityEngine::Vector2  x) ;

constexpr int32_t const& __cordl_internal_get_propertyID() const;

constexpr int32_t& __cordl_internal_get_propertyID() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_target() ;

constexpr void __cordl_internal_set_propertyID(int32_t  value) ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::Material>  value) ;

/// @brief Method .ctor, addr 0x16b5ac8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DOTweenModuleUnityVersion___c__DisplayClass8_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModuleUnityVersion___c__DisplayClass8_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DOTweenModuleUnityVersion___c__DisplayClass8_0(DOTweenModuleUnityVersion___c__DisplayClass8_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModuleUnityVersion___c__DisplayClass8_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DOTweenModuleUnityVersion___c__DisplayClass8_0(DOTweenModuleUnityVersion___c__DisplayClass8_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11797};

/// @brief Field target, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___target;

/// @brief Field propertyID, offset: 0x18, size: 0x4, def value: None
 int32_t  ___propertyID;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DG::Tweening::DOTweenModuleUnityVersion___c__DisplayClass8_0, ___target) == 0x10, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::DOTweenModuleUnityVersion___c__DisplayClass8_0, ___propertyID) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::DG::Tweening::DOTweenModuleUnityVersion___c__DisplayClass8_0, 0x20>, "Size mismatch!");

} // namespace end def DG::Tweening
// Dependencies System.Object
namespace DG::Tweening {
// Is value type: false
// CS Name: DG.Tweening.DOTweenModuleUnityVersion/<>c__DisplayClass9_0
class CORDL_TYPE DOTweenModuleUnityVersion___c__DisplayClass9_0 : public ::System::Object {
public:
// Declarations
/// @brief Field propertyID, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_propertyID, put=__cordl_internal_set_propertyID)) int32_t  propertyID;

/// @brief Field target, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::Material>  target;

static inline ::DG::Tweening::DOTweenModuleUnityVersion___c__DisplayClass9_0* New_ctor() ;

/// @brief Method <DOTiling>b__0, addr 0x16b5d04, size 0x24, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 _DOTiling_b__0() ;

/// @brief Method <DOTiling>b__1, addr 0x16b5d28, size 0x24, virtual false, abstract: false, final false
inline void _DOTiling_b__1(::UnityEngine::Vector2  x) ;

constexpr int32_t const& __cordl_internal_get_propertyID() const;

constexpr int32_t& __cordl_internal_get_propertyID() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_target() ;

constexpr void __cordl_internal_set_propertyID(int32_t  value) ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::Material>  value) ;

/// @brief Method .ctor, addr 0x16b5cb4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DOTweenModuleUnityVersion___c__DisplayClass9_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModuleUnityVersion___c__DisplayClass9_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DOTweenModuleUnityVersion___c__DisplayClass9_0(DOTweenModuleUnityVersion___c__DisplayClass9_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModuleUnityVersion___c__DisplayClass9_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DOTweenModuleUnityVersion___c__DisplayClass9_0(DOTweenModuleUnityVersion___c__DisplayClass9_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11798};

/// @brief Field target, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___target;

/// @brief Field propertyID, offset: 0x18, size: 0x4, def value: None
 int32_t  ___propertyID;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DG::Tweening::DOTweenModuleUnityVersion___c__DisplayClass9_0, ___target) == 0x10, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::DOTweenModuleUnityVersion___c__DisplayClass9_0, ___propertyID) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::DG::Tweening::DOTweenModuleUnityVersion___c__DisplayClass9_0, 0x20>, "Size mismatch!");

} // namespace end def DG::Tweening
// Dependencies System.Object
namespace DG::Tweening {
// Is value type: false
// CS Name: DG.Tweening.DOTweenModuleUnityVersion
class CORDL_TYPE DOTweenModuleUnityVersion : public ::System::Object {
public:
// Declarations
using __c__DisplayClass8_0 = ::DG::Tweening::DOTweenModuleUnityVersion___c__DisplayClass8_0;

using __c__DisplayClass9_0 = ::DG::Tweening::DOTweenModuleUnityVersion___c__DisplayClass9_0;

/// @brief Method DOGradientColor, addr 0x16b4f90, size 0x1e0, virtual false, abstract: false, final false
static inline ::DG::Tweening::Sequence* DOGradientColor(::UnityEngine::Material*  target, ::UnityEngine::Gradient*  gradient, float_t  duration) ;

/// @brief Method DOGradientColor, addr 0x16b5170, size 0x1ec, virtual false, abstract: false, final false
static inline ::DG::Tweening::Sequence* DOGradientColor(::UnityEngine::Material*  target, ::UnityEngine::Gradient*  gradient, ::StringW  property, float_t  duration) ;

/// @brief Method DOOffset, addr 0x16b58e4, size 0x1e4, virtual false, abstract: false, final false
static inline ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector2,::UnityEngine::Vector2,::DG::Tweening::Plugins::Options::VectorOptions>* DOOffset(::UnityEngine::Material*  target, ::UnityEngine::Vector2  endValue, int32_t  propertyID, float_t  duration) ;

/// @brief Method DOTiling, addr 0x16b5ad0, size 0x1e4, virtual false, abstract: false, final false
static inline ::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector2,::UnityEngine::Vector2,::DG::Tweening::Plugins::Options::VectorOptions>* DOTiling(::UnityEngine::Material*  target, ::UnityEngine::Vector2  endValue, int32_t  propertyID, float_t  duration) ;

/// @brief Method WaitForCompletion, addr 0x16b535c, size 0xbc, virtual false, abstract: false, final false
static inline ::UnityEngine::CustomYieldInstruction* WaitForCompletion(::DG::Tweening::Tween*  t, bool  returnCustomYieldInstruction) ;

/// @brief Method WaitForElapsedLoops, addr 0x16b5608, size 0xc4, virtual false, abstract: false, final false
static inline ::UnityEngine::CustomYieldInstruction* WaitForElapsedLoops(::DG::Tweening::Tween*  t, int32_t  elapsedLoops, bool  returnCustomYieldInstruction) ;

/// @brief Method WaitForKill, addr 0x16b5524, size 0xbc, virtual false, abstract: false, final false
static inline ::UnityEngine::CustomYieldInstruction* WaitForKill(::DG::Tweening::Tween*  t, bool  returnCustomYieldInstruction) ;

/// @brief Method WaitForPosition, addr 0x16b56fc, size 0xcc, virtual false, abstract: false, final false
static inline ::UnityEngine::CustomYieldInstruction* WaitForPosition(::DG::Tweening::Tween*  t, float_t  position, bool  returnCustomYieldInstruction) ;

/// @brief Method WaitForRewind, addr 0x16b5440, size 0xbc, virtual false, abstract: false, final false
static inline ::UnityEngine::CustomYieldInstruction* WaitForRewind(::DG::Tweening::Tween*  t, bool  returnCustomYieldInstruction) ;

/// @brief Method WaitForStart, addr 0x16b5800, size 0xbc, virtual false, abstract: false, final false
static inline ::UnityEngine::CustomYieldInstruction* WaitForStart(::DG::Tweening::Tween*  t, bool  returnCustomYieldInstruction) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DOTweenModuleUnityVersion() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModuleUnityVersion", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DOTweenModuleUnityVersion(DOTweenModuleUnityVersion && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DOTweenModuleUnityVersion", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DOTweenModuleUnityVersion(DOTweenModuleUnityVersion const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11799};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::DG::Tweening::DOTweenModuleUnityVersion, 0x10>, "Size mismatch!");

} // namespace end def DG::Tweening
NEED_NO_BOX(::DG::Tweening::DOTweenModuleUnityVersion);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::DOTweenModuleUnityVersion*, "DG.Tweening", "DOTweenModuleUnityVersion");
NEED_NO_BOX(::DG::Tweening::DOTweenModuleUnityVersion___c__DisplayClass8_0);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::DOTweenModuleUnityVersion___c__DisplayClass8_0*, "DG.Tweening", "DOTweenModuleUnityVersion/<>c__DisplayClass8_0");
NEED_NO_BOX(::DG::Tweening::DOTweenModuleUnityVersion___c__DisplayClass9_0);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::DOTweenModuleUnityVersion___c__DisplayClass9_0*, "DG.Tweening", "DOTweenModuleUnityVersion/<>c__DisplayClass9_0");
