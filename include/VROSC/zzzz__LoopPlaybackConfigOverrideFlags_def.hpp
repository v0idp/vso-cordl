#pragma once
// IWYU pragma private; include "VROSC/LoopPlaybackConfigOverrideFlags.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(LoopPlaybackConfigOverrideFlags)
// Forward declare root types
namespace VROSC {
class LoopPlaybackConfigOverrideFlags;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::LoopPlaybackConfigOverrideFlags);
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoopPlaybackConfigOverrideFlags
class CORDL_TYPE LoopPlaybackConfigOverrideFlags : public ::System::Object {
public:
// Declarations
/// @brief Field OverrideFadeIn, offset 0x12, size 0x1 
 __declspec(property(get=__cordl_internal_get_OverrideFadeIn, put=__cordl_internal_set_OverrideFadeIn)) bool  OverrideFadeIn;

/// @brief Field OverrideFadeOut, offset 0x13, size 0x1 
 __declspec(property(get=__cordl_internal_get_OverrideFadeOut, put=__cordl_internal_set_OverrideFadeOut)) bool  OverrideFadeOut;

/// @brief Field OverrideOneShot, offset 0x14, size 0x1 
 __declspec(property(get=__cordl_internal_get_OverrideOneShot, put=__cordl_internal_set_OverrideOneShot)) bool  OverrideOneShot;

/// @brief Field OverrideRetrigger, offset 0x15, size 0x1 
 __declspec(property(get=__cordl_internal_get_OverrideRetrigger, put=__cordl_internal_set_OverrideRetrigger)) bool  OverrideRetrigger;

/// @brief Field OverrideStartMode, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_OverrideStartMode, put=__cordl_internal_set_OverrideStartMode)) bool  OverrideStartMode;

/// @brief Field OverrideStopMode, offset 0x11, size 0x1 
 __declspec(property(get=__cordl_internal_get_OverrideStopMode, put=__cordl_internal_set_OverrideStopMode)) bool  OverrideStopMode;

static inline ::VROSC::LoopPlaybackConfigOverrideFlags* New_ctor() ;

constexpr bool const& __cordl_internal_get_OverrideFadeIn() const;

constexpr bool& __cordl_internal_get_OverrideFadeIn() ;

constexpr bool const& __cordl_internal_get_OverrideFadeOut() const;

constexpr bool& __cordl_internal_get_OverrideFadeOut() ;

constexpr bool const& __cordl_internal_get_OverrideOneShot() const;

constexpr bool& __cordl_internal_get_OverrideOneShot() ;

constexpr bool const& __cordl_internal_get_OverrideRetrigger() const;

constexpr bool& __cordl_internal_get_OverrideRetrigger() ;

constexpr bool const& __cordl_internal_get_OverrideStartMode() const;

constexpr bool& __cordl_internal_get_OverrideStartMode() ;

constexpr bool const& __cordl_internal_get_OverrideStopMode() const;

constexpr bool& __cordl_internal_get_OverrideStopMode() ;

constexpr void __cordl_internal_set_OverrideFadeIn(bool  value) ;

constexpr void __cordl_internal_set_OverrideFadeOut(bool  value) ;

constexpr void __cordl_internal_set_OverrideOneShot(bool  value) ;

constexpr void __cordl_internal_set_OverrideRetrigger(bool  value) ;

constexpr void __cordl_internal_set_OverrideStartMode(bool  value) ;

constexpr void __cordl_internal_set_OverrideStopMode(bool  value) ;

/// @brief Method .ctor, addr 0x1899938, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoopPlaybackConfigOverrideFlags() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoopPlaybackConfigOverrideFlags", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoopPlaybackConfigOverrideFlags(LoopPlaybackConfigOverrideFlags && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoopPlaybackConfigOverrideFlags", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoopPlaybackConfigOverrideFlags(LoopPlaybackConfigOverrideFlags const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{661};

/// @brief Field OverrideStartMode, offset: 0x10, size: 0x1, def value: None
 bool  ___OverrideStartMode;

/// @brief Field OverrideStopMode, offset: 0x11, size: 0x1, def value: None
 bool  ___OverrideStopMode;

/// @brief Field OverrideFadeIn, offset: 0x12, size: 0x1, def value: None
 bool  ___OverrideFadeIn;

/// @brief Field OverrideFadeOut, offset: 0x13, size: 0x1, def value: None
 bool  ___OverrideFadeOut;

/// @brief Field OverrideOneShot, offset: 0x14, size: 0x1, def value: None
 bool  ___OverrideOneShot;

/// @brief Field OverrideRetrigger, offset: 0x15, size: 0x1, def value: None
 bool  ___OverrideRetrigger;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopPlaybackConfigOverrideFlags, ___OverrideStartMode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlaybackConfigOverrideFlags, ___OverrideStopMode) == 0x11, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlaybackConfigOverrideFlags, ___OverrideFadeIn) == 0x12, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlaybackConfigOverrideFlags, ___OverrideFadeOut) == 0x13, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlaybackConfigOverrideFlags, ___OverrideOneShot) == 0x14, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopPlaybackConfigOverrideFlags, ___OverrideRetrigger) == 0x15, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopPlaybackConfigOverrideFlags, 0x18>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::LoopPlaybackConfigOverrideFlags);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopPlaybackConfigOverrideFlags*, "VROSC", "LoopPlaybackConfigOverrideFlags");
