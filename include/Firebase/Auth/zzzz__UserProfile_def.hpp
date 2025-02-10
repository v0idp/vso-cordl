#pragma once
// IWYU pragma private; include "Firebase/Auth/UserProfile.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(UserProfile)
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Firebase::Auth {
class UserProfile;
}
// Write type traits
MARK_REF_PTR_T(::Firebase::Auth::UserProfile);
// Dependencies System.IDisposable, System.Object, System.Runtime.InteropServices.HandleRef
namespace Firebase::Auth {
// Is value type: false
// CS Name: Firebase.Auth.UserProfile
class CORDL_TYPE UserProfile : public ::System::Object {
public:
// Declarations
 __declspec(property(put=set_DisplayName)) ::StringW  DisplayName;

/// @brief Field swigCMemOwn, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_swigCMemOwn, put=__cordl_internal_set_swigCMemOwn)) bool  swigCMemOwn;

/// @brief Field swigCPtr, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x18fb9bc, size 0x19c, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Finalize, addr 0x18fb928, size 0x94, virtual true, abstract: false, final false
inline void Finalize() ;

static inline ::Firebase::Auth::UserProfile* New_ctor() ;

static inline ::Firebase::Auth::UserProfile* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

constexpr bool const& __cordl_internal_get_swigCMemOwn() const;

constexpr bool& __cordl_internal_get_swigCMemOwn() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCMemOwn(bool  value) ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x18fb820, size 0xc4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x18fb7cc, size 0x54, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x18fb8e4, size 0x44, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::Firebase::Auth::UserProfile*  obj) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method set_DisplayName, addr 0x18fbb58, size 0xbc, virtual false, abstract: false, final false
inline void set_DisplayName(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UserProfile() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UserProfile", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UserProfile(UserProfile && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UserProfile", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UserProfile(UserProfile const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12250};

/// @brief Field swigCPtr, offset: 0x10, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

/// @brief Field swigCMemOwn, offset: 0x20, size: 0x1, def value: None
 bool  ___swigCMemOwn;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Firebase::Auth::UserProfile, ___swigCPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Firebase::Auth::UserProfile, ___swigCMemOwn) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Firebase::Auth::UserProfile, 0x28>, "Size mismatch!");

} // namespace end def Firebase::Auth
NEED_NO_BOX(::Firebase::Auth::UserProfile);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Auth::UserProfile*, "Firebase.Auth", "UserProfile");
