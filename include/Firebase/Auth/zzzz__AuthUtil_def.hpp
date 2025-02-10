#pragma once
// IWYU pragma private; include "Firebase/Auth/AuthUtil.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(AuthUtil)
namespace Firebase::Auth {
class FirebaseAuth_StateChangedDelegate;
}
namespace Firebase::Auth {
class FirebaseAuth;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Firebase::Auth {
class AuthUtil;
}
// Write type traits
MARK_REF_PTR_T(::Firebase::Auth::AuthUtil);
// Dependencies System.Object
namespace Firebase::Auth {
// Is value type: false
// CS Name: Firebase.Auth.AuthUtil
class CORDL_TYPE AuthUtil : public ::System::Object {
public:
// Declarations
/// @brief Method CreateAuthStateListener, addr 0x18f8f04, size 0xd8, virtual false, abstract: false, final false
static inline ::System::IntPtr CreateAuthStateListener(::Firebase::Auth::FirebaseAuth*  auth, ::Firebase::Auth::FirebaseAuth_StateChangedDelegate*  state_changed_delegate) ;

/// @brief Method CreateIdTokenListener, addr 0x18f90f0, size 0xd8, virtual false, abstract: false, final false
static inline ::System::IntPtr CreateIdTokenListener(::Firebase::Auth::FirebaseAuth*  auth, ::Firebase::Auth::FirebaseAuth_StateChangedDelegate*  state_changed_delegate) ;

/// @brief Method DestroyAuthStateListener, addr 0x18f9020, size 0xd0, virtual false, abstract: false, final false
static inline void DestroyAuthStateListener(::Firebase::Auth::FirebaseAuth*  auth, ::System::IntPtr  listener) ;

/// @brief Method DestroyIdTokenListener, addr 0x18f91c8, size 0xd0, virtual false, abstract: false, final false
static inline void DestroyIdTokenListener(::Firebase::Auth::FirebaseAuth*  auth, ::System::IntPtr  listener) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AuthUtil() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AuthUtil", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AuthUtil(AuthUtil && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AuthUtil", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AuthUtil(AuthUtil const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12241};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Firebase::Auth::AuthUtil, 0x10>, "Size mismatch!");

} // namespace end def Firebase::Auth
NEED_NO_BOX(::Firebase::Auth::AuthUtil);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Auth::AuthUtil*, "Firebase.Auth", "AuthUtil");
