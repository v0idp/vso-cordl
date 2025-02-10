#pragma once
// IWYU pragma private; include "DG/Tweening/Core/ABSSequentiable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "DG/Tweening/zzzz__TweenType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ABSSequentiable)
namespace DG::Tweening {
class TweenCallback;
}
// Forward declare root types
namespace DG::Tweening::Core {
class ABSSequentiable;
}
// Write type traits
MARK_REF_PTR_T(::DG::Tweening::Core::ABSSequentiable);
// Dependencies DG.Tweening.TweenType, System.Object
namespace DG::Tweening::Core {
// Is value type: false
// CS Name: DG.Tweening.Core.ABSSequentiable
class CORDL_TYPE ABSSequentiable : public ::System::Object {
public:
// Declarations
/// @brief Field onStart, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_onStart, put=__cordl_internal_set_onStart)) ::DG::Tweening::TweenCallback*  onStart;

/// @brief Field sequencedEndPosition, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_sequencedEndPosition, put=__cordl_internal_set_sequencedEndPosition)) float_t  sequencedEndPosition;

/// @brief Field sequencedPosition, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_sequencedPosition, put=__cordl_internal_set_sequencedPosition)) float_t  sequencedPosition;

/// @brief Field tweenType, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_tweenType, put=__cordl_internal_set_tweenType)) ::DG::Tweening::TweenType  tweenType;

static inline ::DG::Tweening::Core::ABSSequentiable* New_ctor() ;

constexpr ::DG::Tweening::TweenCallback* const& __cordl_internal_get_onStart() const;

constexpr ::DG::Tweening::TweenCallback*& __cordl_internal_get_onStart() ;

constexpr float_t const& __cordl_internal_get_sequencedEndPosition() const;

constexpr float_t& __cordl_internal_get_sequencedEndPosition() ;

constexpr float_t const& __cordl_internal_get_sequencedPosition() const;

constexpr float_t& __cordl_internal_get_sequencedPosition() ;

constexpr ::DG::Tweening::TweenType const& __cordl_internal_get_tweenType() const;

constexpr ::DG::Tweening::TweenType& __cordl_internal_get_tweenType() ;

constexpr void __cordl_internal_set_onStart(::DG::Tweening::TweenCallback*  value) ;

constexpr void __cordl_internal_set_sequencedEndPosition(float_t  value) ;

constexpr void __cordl_internal_set_sequencedPosition(float_t  value) ;

constexpr void __cordl_internal_set_tweenType(::DG::Tweening::TweenType  value) ;

/// @brief Method .ctor, addr 0x18e37e0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ABSSequentiable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ABSSequentiable", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ABSSequentiable(ABSSequentiable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ABSSequentiable", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ABSSequentiable(ABSSequentiable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10832};

/// @brief Field tweenType, offset: 0x10, size: 0x4, def value: None
 ::DG::Tweening::TweenType  ___tweenType;

/// @brief Field sequencedPosition, offset: 0x14, size: 0x4, def value: None
 float_t  ___sequencedPosition;

/// @brief Field sequencedEndPosition, offset: 0x18, size: 0x4, def value: None
 float_t  ___sequencedEndPosition;

/// @brief Field onStart, offset: 0x20, size: 0x8, def value: None
 ::DG::Tweening::TweenCallback*  ___onStart;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DG::Tweening::Core::ABSSequentiable, ___tweenType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Core::ABSSequentiable, ___sequencedPosition) == 0x14, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Core::ABSSequentiable, ___sequencedEndPosition) == 0x18, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Core::ABSSequentiable, ___onStart) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::DG::Tweening::Core::ABSSequentiable, 0x28>, "Size mismatch!");

} // namespace end def DG::Tweening::Core
NEED_NO_BOX(::DG::Tweening::Core::ABSSequentiable);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::Core::ABSSequentiable*, "DG.Tweening.Core", "ABSSequentiable");
