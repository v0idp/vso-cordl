#pragma once
// IWYU pragma private; include "VROSC/AnchorState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRSpatialAnchor_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AnchorState)
namespace VROSC {
struct AnchorState_State;
}
// Forward declare root types
namespace VROSC {
struct AnchorState_State;
}
namespace VROSC {
class AnchorState;
}
// Write type traits
MARK_VAL_T(::VROSC::AnchorState_State);
MARK_REF_PTR_T(::VROSC::AnchorState);
// Dependencies 
namespace VROSC {
// Is value type: true
// CS Name: VROSC.AnchorState/State
struct CORDL_TYPE AnchorState_State {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AnchorState_State_Unwrapped
enum struct __AnchorState_State_Unwrapped : int32_t {
__E_Pending = static_cast<int32_t>(0x0),
__E_Localized = static_cast<int32_t>(0x1),
__E_FailedToLocalize = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AnchorState_State_Unwrapped () const noexcept {
return static_cast<__AnchorState_State_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AnchorState_State() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AnchorState_State(int32_t  value__) noexcept;

/// @brief Field FailedToLocalize value: I32(2)
static ::VROSC::AnchorState_State const FailedToLocalize;

/// @brief Field Localized value: I32(1)
static ::VROSC::AnchorState_State const Localized;

/// @brief Field Pending value: I32(0)
static ::VROSC::AnchorState_State const Pending;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1040};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::AnchorState_State, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::AnchorState_State, 0x4>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies OVRSpatialAnchor::UnboundAnchor, System.Object, VROSC.AnchorState::State
namespace VROSC {
// Is value type: false
// CS Name: VROSC.AnchorState
class CORDL_TYPE AnchorState : public ::System::Object {
public:
// Declarations
using State = ::VROSC::AnchorState_State;

/// @brief Field LocalizedState, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_LocalizedState, put=__cordl_internal_set_LocalizedState)) ::VROSC::AnchorState_State  LocalizedState;

/// @brief Field UnboundAnchor, offset 0x10, size 0x18 
 __declspec(property(get=__cordl_internal_get_UnboundAnchor, put=__cordl_internal_set_UnboundAnchor)) ::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor  UnboundAnchor;

static inline ::VROSC::AnchorState* New_ctor() ;

constexpr ::VROSC::AnchorState_State const& __cordl_internal_get_LocalizedState() const;

constexpr ::VROSC::AnchorState_State& __cordl_internal_get_LocalizedState() ;

constexpr ::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor const& __cordl_internal_get_UnboundAnchor() const;

constexpr ::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor& __cordl_internal_get_UnboundAnchor() ;

constexpr void __cordl_internal_set_LocalizedState(::VROSC::AnchorState_State  value) ;

constexpr void __cordl_internal_set_UnboundAnchor(::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor  value) ;

/// @brief Method .ctor, addr 0x1729534, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AnchorState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AnchorState", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AnchorState(AnchorState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnchorState", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnchorState(AnchorState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1041};

/// @brief Field UnboundAnchor, offset: 0x10, size: 0x18, def value: None
 ::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor  ___UnboundAnchor;

/// @brief Field LocalizedState, offset: 0x28, size: 0x4, def value: None
 ::VROSC::AnchorState_State  ___LocalizedState;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::AnchorState, ___UnboundAnchor) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::AnchorState, ___LocalizedState) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::AnchorState, 0x30>, "Size mismatch!");

} // namespace end def VROSC
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AnchorState_State, "VROSC", "AnchorState/State");
NEED_NO_BOX(::VROSC::AnchorState);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AnchorState*, "VROSC", "AnchorState");
