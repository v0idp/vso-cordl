#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/Leaderboard.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Leaderboard)
namespace Oculus::Platform::Models {
class Destination;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class Leaderboard;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::Leaderboard);
// Dependencies System.Object
namespace Oculus::Platform::Models {
// Is value type: false
// CS Name: Oculus.Platform.Models.Leaderboard
class CORDL_TYPE Leaderboard : public ::System::Object {
public:
// Declarations
/// @brief Field ApiName, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_ApiName, put=__cordl_internal_set_ApiName)) ::StringW  ApiName;

/// @brief Field Destination, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Destination, put=__cordl_internal_set_Destination)) ::Oculus::Platform::Models::Destination*  Destination;

/// @brief Field DestinationOptional, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_DestinationOptional, put=__cordl_internal_set_DestinationOptional)) ::Oculus::Platform::Models::Destination*  DestinationOptional;

/// @brief Field ID, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__cordl_ID, put=__cordl_internal_set__cordl_ID)) uint64_t  _cordl_ID;

static inline ::Oculus::Platform::Models::Leaderboard* New_ctor(::System::IntPtr  o) ;

constexpr ::StringW const& __cordl_internal_get_ApiName() const;

constexpr ::StringW& __cordl_internal_get_ApiName() ;

constexpr ::Oculus::Platform::Models::Destination* const& __cordl_internal_get_Destination() const;

constexpr ::Oculus::Platform::Models::Destination*& __cordl_internal_get_Destination() ;

constexpr ::Oculus::Platform::Models::Destination* const& __cordl_internal_get_DestinationOptional() const;

constexpr ::Oculus::Platform::Models::Destination*& __cordl_internal_get_DestinationOptional() ;

constexpr uint64_t const& __cordl_internal_get__cordl_ID() const;

constexpr uint64_t& __cordl_internal_get__cordl_ID() ;

constexpr void __cordl_internal_set_ApiName(::StringW  value) ;

constexpr void __cordl_internal_set_Destination(::Oculus::Platform::Models::Destination*  value) ;

constexpr void __cordl_internal_set_DestinationOptional(::Oculus::Platform::Models::Destination*  value) ;

constexpr void __cordl_internal_set__cordl_ID(uint64_t  value) ;

/// @brief Method .ctor, addr 0x28842ec, size 0xf8, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  o) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Leaderboard() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Leaderboard", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Leaderboard(Leaderboard && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Leaderboard", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Leaderboard(Leaderboard const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10634};

/// @brief Field ApiName, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___ApiName;

/// @brief Field DestinationOptional, offset: 0x18, size: 0x8, def value: None
 ::Oculus::Platform::Models::Destination*  ___DestinationOptional;

/// @brief Field Destination, offset: 0x20, size: 0x8, def value: None
 ::Oculus::Platform::Models::Destination*  ___Destination;

/// @brief Field ID, offset: 0x28, size: 0x8, def value: None
 uint64_t  ____cordl_ID;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Platform::Models::Leaderboard, ___ApiName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::Leaderboard, ___DestinationOptional) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::Leaderboard, ___Destination) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::Leaderboard, ____cordl_ID) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::Leaderboard, 0x30>, "Size mismatch!");

} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::Leaderboard);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::Leaderboard*, "Oculus.Platform.Models", "Leaderboard");
