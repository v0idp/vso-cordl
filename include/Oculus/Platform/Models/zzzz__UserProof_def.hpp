#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/UserProof.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(UserProof)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class UserProof;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::UserProof);
// Dependencies System.Object
namespace Oculus::Platform::Models {
// Is value type: false
// CS Name: Oculus.Platform.Models.UserProof
class CORDL_TYPE UserProof : public ::System::Object {
public:
// Declarations
/// @brief Field Value, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Value, put=__cordl_internal_set_Value)) ::StringW  Value;

static inline ::Oculus::Platform::Models::UserProof* New_ctor(::System::IntPtr  o) ;

constexpr ::StringW const& __cordl_internal_get_Value() const;

constexpr ::StringW& __cordl_internal_get_Value() ;

constexpr void __cordl_internal_set_Value(::StringW  value) ;

/// @brief Method .ctor, addr 0x2888348, size 0x78, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  o) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UserProof() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UserProof", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UserProof(UserProof && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UserProof", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UserProof(UserProof const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10677};

/// @brief Field Value, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___Value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Platform::Models::UserProof, ___Value) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::UserProof, 0x18>, "Size mismatch!");

} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::UserProof);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::UserProof*, "Oculus.Platform.Models", "UserProof");
