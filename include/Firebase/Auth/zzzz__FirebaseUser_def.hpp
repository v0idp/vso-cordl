#pragma once
// IWYU pragma private; include "Firebase/Auth/FirebaseUser.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(FirebaseUser)
namespace Firebase::Auth {
class FirebaseAuth;
}
namespace Firebase::Auth {
class UserProfile;
}
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Firebase::Auth {
class FirebaseUser;
}
// Write type traits
MARK_REF_PTR_T(::Firebase::Auth::FirebaseUser);
// Dependencies System.IDisposable, System.Object, System.Runtime.InteropServices.HandleRef
namespace Firebase::Auth {
// Is value type: false
// CS Name: Firebase.Auth.FirebaseUser
class CORDL_TYPE FirebaseUser : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_IsEmailVerified)) bool  IsEmailVerified;

 __declspec(property(get=get_UserId)) ::StringW  UserId;

/// @brief Field authProxy, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_authProxy, put=__cordl_internal_set_authProxy)) ::Firebase::Auth::FirebaseAuth*  authProxy;

/// @brief Field swigCMemOwn, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_swigCMemOwn, put=__cordl_internal_set_swigCMemOwn)) bool  swigCMemOwn;

/// @brief Field swigCPtr, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x18f9f28, size 0x19c, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Finalize, addr 0x18fbc14, size 0x94, virtual true, abstract: false, final false
inline void Finalize() ;

static inline ::Firebase::Auth::FirebaseUser* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method ReloadAsync, addr 0x18fbfac, size 0xb0, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* ReloadAsync() ;

/// @brief Method SendEmailVerificationAsync, addr 0x18fbe28, size 0xb0, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* SendEmailVerificationAsync() ;

/// @brief Method UpdateEmailAsync, addr 0x18fbca8, size 0xc0, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* UpdateEmailAsync(::StringW  email) ;

/// @brief Method UpdatePasswordAsync, addr 0x18fbd68, size 0xc0, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* UpdatePasswordAsync(::StringW  password) ;

/// @brief Method UpdateUserProfileAsync, addr 0x18fbed8, size 0xd4, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* UpdateUserProfileAsync(::Firebase::Auth::UserProfile*  profile) ;

constexpr ::Firebase::Auth::FirebaseAuth* const& __cordl_internal_get_authProxy() const;

constexpr ::Firebase::Auth::FirebaseAuth*& __cordl_internal_get_authProxy() ;

constexpr bool const& __cordl_internal_get_swigCMemOwn() const;

constexpr bool& __cordl_internal_get_swigCMemOwn() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_authProxy(::Firebase::Auth::FirebaseAuth*  value) ;

constexpr void __cordl_internal_set_swigCMemOwn(bool  value) ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x18fb3d8, size 0x4c, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x18fa714, size 0x44, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::Firebase::Auth::FirebaseUser*  obj) ;

/// @brief Method get_IsEmailVerified, addr 0x18fc05c, size 0x98, virtual false, abstract: false, final false
inline bool get_IsEmailVerified() ;

/// @brief Method get_UserId, addr 0x18fc0f4, size 0x98, virtual true, abstract: false, final true
inline ::StringW get_UserId() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FirebaseUser() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FirebaseUser", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FirebaseUser(FirebaseUser && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FirebaseUser", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FirebaseUser(FirebaseUser const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12251};

/// @brief Field swigCMemOwn, offset: 0x10, size: 0x1, def value: None
 bool  ___swigCMemOwn;

/// @brief Field swigCPtr, offset: 0x18, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

/// @brief Field authProxy, offset: 0x28, size: 0x8, def value: None
 ::Firebase::Auth::FirebaseAuth*  ___authProxy;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Firebase::Auth::FirebaseUser, ___swigCMemOwn) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Firebase::Auth::FirebaseUser, ___swigCPtr) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Firebase::Auth::FirebaseUser, ___authProxy) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Firebase::Auth::FirebaseUser, 0x30>, "Size mismatch!");

} // namespace end def Firebase::Auth
NEED_NO_BOX(::Firebase::Auth::FirebaseUser);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Auth::FirebaseUser*, "Firebase.Auth", "FirebaseUser");
