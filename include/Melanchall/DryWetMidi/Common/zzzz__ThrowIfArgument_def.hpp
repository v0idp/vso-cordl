#pragma once
// IWYU pragma private; include "Melanchall/DryWetMidi/Common/ThrowIfArgument.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ThrowIfArgument)
namespace System {
class Object;
}
// Forward declare root types
namespace Melanchall::DryWetMidi::Common {
class ThrowIfArgument;
}
// Write type traits
MARK_REF_PTR_T(::Melanchall::DryWetMidi::Common::ThrowIfArgument);
// Dependencies System.Object
namespace Melanchall::DryWetMidi::Common {
// Is value type: false
// CS Name: Melanchall.DryWetMidi.Common.ThrowIfArgument
class CORDL_TYPE ThrowIfArgument : public ::System::Object {
public:
// Declarations
/// @brief Method IsInvalidEnumValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TEnum>
static inline void IsInvalidEnumValue(::StringW  parameterName, TEnum  argument) ;

/// @brief Method IsLessThan, addr 0x25a6b78, size 0xc, virtual false, abstract: false, final false
static inline void IsLessThan(::StringW  parameterName, int32_t  value, int32_t  reference, ::StringW  message) ;

/// @brief Method IsLessThan, addr 0x25a6b84, size 0xc, virtual false, abstract: false, final false
static inline void IsLessThan(::StringW  parameterName, int64_t  value, int64_t  reference, ::StringW  message) ;

/// @brief Method IsNegative, addr 0x25a4d08, size 0x10, virtual false, abstract: false, final false
static inline void IsNegative(::StringW  parameterName, int32_t  value, ::StringW  message) ;

/// @brief Method IsNegative, addr 0x25a1664, size 0x10, virtual false, abstract: false, final false
static inline void IsNegative(::StringW  parameterName, int64_t  value, ::StringW  message) ;

/// @brief Method IsNull, addr 0x259d56c, size 0x50, virtual false, abstract: false, final false
static inline void IsNull(::StringW  parameterName, ::System::Object*  argument) ;

/// @brief Method IsNullOrWhiteSpaceString, addr 0x25a4fa4, size 0x88, virtual false, abstract: false, final false
static inline void IsNullOrWhiteSpaceString(::StringW  parameterName, ::StringW  value, ::StringW  stringDescription) ;

/// @brief Method IsOutOfRange, addr 0x25a2110, size 0x88, virtual false, abstract: false, final false
static inline void IsOutOfRange(::StringW  parameterName, int32_t  value, int32_t  min, int32_t  max, ::StringW  message) ;

/// @brief Method IsOutOfRange, addr 0x25a6af0, size 0x88, virtual false, abstract: false, final false
static inline void IsOutOfRange(::StringW  parameterName, int64_t  value, int64_t  min, int64_t  max, ::StringW  message) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ThrowIfArgument() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ThrowIfArgument", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ThrowIfArgument(ThrowIfArgument && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ThrowIfArgument", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ThrowIfArgument(ThrowIfArgument const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11667};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Melanchall::DryWetMidi::Common::ThrowIfArgument, 0x10>, "Size mismatch!");

} // namespace end def Melanchall::DryWetMidi::Common
NEED_NO_BOX(::Melanchall::DryWetMidi::Common::ThrowIfArgument);
DEFINE_IL2CPP_ARG_TYPE(::Melanchall::DryWetMidi::Common::ThrowIfArgument*, "Melanchall.DryWetMidi.Common", "ThrowIfArgument");
