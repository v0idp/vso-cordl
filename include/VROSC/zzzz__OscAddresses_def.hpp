#pragma once
// IWYU pragma private; include "VROSC/OscAddresses.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OscAddresses)
namespace VROSC {
struct OscAddresses_ActionType;
}
namespace VROSC {
struct WidgetSettings_Identifier;
}
// Forward declare root types
namespace VROSC {
struct OscAddresses_ActionType;
}
namespace VROSC {
class OscAddresses;
}
// Write type traits
MARK_VAL_T(::VROSC::OscAddresses_ActionType);
MARK_REF_PTR_T(::VROSC::OscAddresses);
// Dependencies 
namespace VROSC {
// Is value type: true
// CS Name: VROSC.OscAddresses/ActionType
struct CORDL_TYPE OscAddresses_ActionType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OscAddresses_ActionType_Unwrapped
enum struct __OscAddresses_ActionType_Unwrapped : int32_t {
__E_NoteOn = static_cast<int32_t>(0x0),
__E_NoteOff = static_cast<int32_t>(0x1),
__E_Parameter = static_cast<int32_t>(0x2),
__E_Volume = static_cast<int32_t>(0x3),
__E_Channel = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OscAddresses_ActionType_Unwrapped () const noexcept {
return static_cast<__OscAddresses_ActionType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OscAddresses_ActionType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr OscAddresses_ActionType(int32_t  value__) noexcept;

/// @brief Field Channel value: I32(4)
static ::VROSC::OscAddresses_ActionType const Channel;

/// @brief Field NoteOff value: I32(1)
static ::VROSC::OscAddresses_ActionType const NoteOff;

/// @brief Field NoteOn value: I32(0)
static ::VROSC::OscAddresses_ActionType const NoteOn;

/// @brief Field Parameter value: I32(2)
static ::VROSC::OscAddresses_ActionType const Parameter;

/// @brief Field Volume value: I32(3)
static ::VROSC::OscAddresses_ActionType const Volume;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{768};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::OscAddresses_ActionType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::OscAddresses_ActionType, 0x4>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.OscAddresses
class CORDL_TYPE OscAddresses : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using ActionType = ::VROSC::OscAddresses_ActionType;

/// @brief Method GetInstrumentOSCName, addr 0x16eff44, size 0x1f0, virtual false, abstract: false, final false
static inline ::StringW GetInstrumentOSCName(::VROSC::WidgetSettings_Identifier  instrumentId) ;

/// @brief Method GetOscAddress, addr 0x16efe90, size 0xb4, virtual false, abstract: false, final false
static inline ::StringW GetOscAddress(::StringW  clientName, ::VROSC::WidgetSettings_Identifier  instrument, ::VROSC::OscAddresses_ActionType  actionType) ;

/// @brief Method GetOscAddress, addr 0x16f0134, size 0xe0, virtual false, abstract: false, final false
static inline ::StringW GetOscAddress(::StringW  clientName, ::StringW  secondaryAddress, ::StringW  tertiaryAddress) ;

static inline ::VROSC::OscAddresses* New_ctor() ;

/// @brief Method .ctor, addr 0x16f0214, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OscAddresses() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OscAddresses", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OscAddresses(OscAddresses && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OscAddresses", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OscAddresses(OscAddresses const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{769};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VROSC::OscAddresses, 0x20>, "Size mismatch!");

} // namespace end def VROSC
DEFINE_IL2CPP_ARG_TYPE(::VROSC::OscAddresses_ActionType, "VROSC", "OscAddresses/ActionType");
NEED_NO_BOX(::VROSC::OscAddresses);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::OscAddresses*, "VROSC", "OscAddresses");
