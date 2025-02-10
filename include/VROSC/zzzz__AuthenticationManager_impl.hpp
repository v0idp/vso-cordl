#pragma once
// IWYU pragma private; include "VROSC/AuthenticationManager.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/zzzz__AuthenticationManager_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "VROSC/zzzz__AuthenticationManager_def.hpp"
#include "VROSC/zzzz__Error_def.hpp"
#include "VROSC/zzzz__IState_def.hpp"
#include "VROSC/zzzz__LoginWithEmailState_def.hpp"
#include "VROSC/zzzz__StateMachine_def.hpp"
//  Writing Method size for method: ::VROSC::AuthenticationManager_LocalUserData.get_HasData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::AuthenticationManager_LocalUserData::*)()>(&::VROSC::AuthenticationManager_LocalUserData::get_HasData)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182ec00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager_LocalUserData*>::get(),
                        "get_HasData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AuthenticationManager_LocalUserData._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AuthenticationManager_LocalUserData::*)()>(&::VROSC::AuthenticationManager_LocalUserData::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x182e4f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager_LocalUserData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& VROSC::AuthenticationManager_LocalUserData::__cordl_internal_get_Email()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Email;
}
constexpr ::StringW const& VROSC::AuthenticationManager_LocalUserData::__cordl_internal_get_Email() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Email;
}
constexpr void VROSC::AuthenticationManager_LocalUserData::__cordl_internal_set_Email(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Email)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& VROSC::AuthenticationManager_LocalUserData::__cordl_internal_get_Password()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Password;
}
constexpr ::StringW const& VROSC::AuthenticationManager_LocalUserData::__cordl_internal_get_Password() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Password;
}
constexpr void VROSC::AuthenticationManager_LocalUserData::__cordl_internal_set_Password(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Password)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::DateTime& VROSC::AuthenticationManager_LocalUserData::__cordl_internal_get_LastLoginDate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LastLoginDate;
}
constexpr ::System::DateTime const& VROSC::AuthenticationManager_LocalUserData::__cordl_internal_get_LastLoginDate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LastLoginDate;
}
constexpr void VROSC::AuthenticationManager_LocalUserData::__cordl_internal_set_LastLoginDate(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LastLoginDate = value;
}
constexpr bool& VROSC::AuthenticationManager_LocalUserData::__cordl_internal_get_RememberMe()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RememberMe;
}
constexpr bool const& VROSC::AuthenticationManager_LocalUserData::__cordl_internal_get_RememberMe() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RememberMe;
}
constexpr void VROSC::AuthenticationManager_LocalUserData::__cordl_internal_set_RememberMe(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RememberMe = value;
}
constexpr bool& VROSC::AuthenticationManager_LocalUserData::__cordl_internal_get_SentVerificationEmail()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SentVerificationEmail;
}
constexpr bool const& VROSC::AuthenticationManager_LocalUserData::__cordl_internal_get_SentVerificationEmail() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SentVerificationEmail;
}
constexpr void VROSC::AuthenticationManager_LocalUserData::__cordl_internal_set_SentVerificationEmail(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SentVerificationEmail = value;
}
inline bool VROSC::AuthenticationManager_LocalUserData::get_HasData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager_LocalUserData*>::get(),
                        "get_HasData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void VROSC::AuthenticationManager_LocalUserData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager_LocalUserData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::AuthenticationManager_LocalUserData* VROSC::AuthenticationManager_LocalUserData::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::AuthenticationManager_LocalUserData*>());
}
// Ctor Parameters []
constexpr ::VROSC::AuthenticationManager_LocalUserData::AuthenticationManager_LocalUserData()   {
}
//  Writing Method size for method: ::VROSC::AuthenticationManager_FirebaseUserData.get_HasData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::AuthenticationManager_FirebaseUserData::*)()>(&::VROSC::AuthenticationManager_FirebaseUserData::get_HasData)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182ec20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager_FirebaseUserData*>::get(),
                        "get_HasData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AuthenticationManager_FirebaseUserData._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AuthenticationManager_FirebaseUserData::*)()>(&::VROSC::AuthenticationManager_FirebaseUserData::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x182e4a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager_FirebaseUserData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& VROSC::AuthenticationManager_FirebaseUserData::__cordl_internal_get_UserId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UserId;
}
constexpr ::StringW const& VROSC::AuthenticationManager_FirebaseUserData::__cordl_internal_get_UserId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UserId;
}
constexpr void VROSC::AuthenticationManager_FirebaseUserData::__cordl_internal_set_UserId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___UserId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& VROSC::AuthenticationManager_FirebaseUserData::__cordl_internal_get_Email()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Email;
}
constexpr ::StringW const& VROSC::AuthenticationManager_FirebaseUserData::__cordl_internal_get_Email() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Email;
}
constexpr void VROSC::AuthenticationManager_FirebaseUserData::__cordl_internal_set_Email(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Email)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& VROSC::AuthenticationManager_FirebaseUserData::__cordl_internal_get_IsLoggedIn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsLoggedIn;
}
constexpr bool const& VROSC::AuthenticationManager_FirebaseUserData::__cordl_internal_get_IsLoggedIn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsLoggedIn;
}
constexpr void VROSC::AuthenticationManager_FirebaseUserData::__cordl_internal_set_IsLoggedIn(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IsLoggedIn = value;
}
constexpr bool& VROSC::AuthenticationManager_FirebaseUserData::__cordl_internal_get_IsVerified()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsVerified;
}
constexpr bool const& VROSC::AuthenticationManager_FirebaseUserData::__cordl_internal_get_IsVerified() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsVerified;
}
constexpr void VROSC::AuthenticationManager_FirebaseUserData::__cordl_internal_set_IsVerified(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IsVerified = value;
}
inline bool VROSC::AuthenticationManager_FirebaseUserData::get_HasData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager_FirebaseUserData*>::get(),
                        "get_HasData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void VROSC::AuthenticationManager_FirebaseUserData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager_FirebaseUserData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::AuthenticationManager_FirebaseUserData* VROSC::AuthenticationManager_FirebaseUserData::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::AuthenticationManager_FirebaseUserData*>());
}
// Ctor Parameters []
constexpr ::VROSC::AuthenticationManager_FirebaseUserData::AuthenticationManager_FirebaseUserData()   {
}
//  Writing Method size for method: ::VROSC::AuthenticationManager___c._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AuthenticationManager___c::*)()>(&::VROSC::AuthenticationManager___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x182ec9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager___c*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AuthenticationManager___c._Awake_b__27_5
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::AuthenticationManager___c::*)()>(&::VROSC::AuthenticationManager___c::_Awake_b__27_5)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x182eca4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager___c*>::get(),
                        "<Awake>b__27_5",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AuthenticationManager___c._UserEmailChangeSuccess_b__42_0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AuthenticationManager___c::*)(::VROSC::Error)>(&::VROSC::AuthenticationManager___c::_UserEmailChangeSuccess_b__42_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x182ecac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager___c*>::get(),
                        "<UserEmailChangeSuccess>b__42_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Error>::get()}
                    )));
    return ___internal_method;
  }
};
inline void VROSC::AuthenticationManager___c::setStaticF___9(::VROSC::AuthenticationManager___c*  value)  {
::cordl_internals::setStaticField<::VROSC::AuthenticationManager___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager___c*>::get>(std::forward<::VROSC::AuthenticationManager___c*>(value));
}
inline ::VROSC::AuthenticationManager___c* VROSC::AuthenticationManager___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::VROSC::AuthenticationManager___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager___c*>::get>();
}
inline void VROSC::AuthenticationManager___c::setStaticF___9__27_5(::System::Func_1<bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<bool>*, "<>9__27_5", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager___c*>::get>(std::forward<::System::Func_1<bool>*>(value));
}
inline ::System::Func_1<bool>* VROSC::AuthenticationManager___c::getStaticF___9__27_5()  {
return ::cordl_internals::getStaticField<::System::Func_1<bool>*, "<>9__27_5", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager___c*>::get>();
}
inline void VROSC::AuthenticationManager___c::setStaticF___9__42_0(::System::Action_1<::VROSC::Error>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::VROSC::Error>*, "<>9__42_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager___c*>::get>(std::forward<::System::Action_1<::VROSC::Error>*>(value));
}
inline ::System::Action_1<::VROSC::Error>* VROSC::AuthenticationManager___c::getStaticF___9__42_0()  {
return ::cordl_internals::getStaticField<::System::Action_1<::VROSC::Error>*, "<>9__42_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager___c*>::get>();
}
inline void VROSC::AuthenticationManager___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager___c*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool VROSC::AuthenticationManager___c::_Awake_b__27_5()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager___c*>::get(),
                        "<Awake>b__27_5",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void VROSC::AuthenticationManager___c::_UserEmailChangeSuccess_b__42_0(::VROSC::Error  error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager___c*>::get(),
                        "<UserEmailChangeSuccess>b__42_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Error>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, error);
}
inline ::VROSC::AuthenticationManager___c* VROSC::AuthenticationManager___c::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::AuthenticationManager___c*>());
}
// Ctor Parameters []
constexpr ::VROSC::AuthenticationManager___c::AuthenticationManager___c()   {
}
//  Writing Method size for method: ::VROSC::AuthenticationManager___c__DisplayClass37_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AuthenticationManager___c__DisplayClass37_0::*)()>(&::VROSC::AuthenticationManager___c__DisplayClass37_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x182dda4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager___c__DisplayClass37_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AuthenticationManager___c__DisplayClass37_0._ChangeUserPassword_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AuthenticationManager___c__DisplayClass37_0::*)(::StringW, bool)>(&::VROSC::AuthenticationManager___c__DisplayClass37_0::_ChangeUserPassword_b__0)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x182ecb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager___c__DisplayClass37_0*>::get(),
                        "<ChangeUserPassword>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& VROSC::AuthenticationManager___c__DisplayClass37_0::__cordl_internal_get_newPassword()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___newPassword;
}
constexpr ::StringW const& VROSC::AuthenticationManager___c__DisplayClass37_0::__cordl_internal_get_newPassword() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___newPassword;
}
constexpr void VROSC::AuthenticationManager___c__DisplayClass37_0::__cordl_internal_set_newPassword(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___newPassword)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::AuthenticationManager>& VROSC::AuthenticationManager___c__DisplayClass37_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::VROSC::AuthenticationManager> const& VROSC::AuthenticationManager___c__DisplayClass37_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void VROSC::AuthenticationManager___c__DisplayClass37_0::__cordl_internal_set___4__this(::UnityW<::VROSC::AuthenticationManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::AuthenticationManager___c__DisplayClass37_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager___c__DisplayClass37_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::AuthenticationManager___c__DisplayClass37_0::_ChangeUserPassword_b__0(::StringW  email, bool  isVerified)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager___c__DisplayClass37_0*>::get(),
                        "<ChangeUserPassword>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, email, isVerified);
}
inline ::VROSC::AuthenticationManager___c__DisplayClass37_0* VROSC::AuthenticationManager___c__DisplayClass37_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::AuthenticationManager___c__DisplayClass37_0*>());
}
// Ctor Parameters []
constexpr ::VROSC::AuthenticationManager___c__DisplayClass37_0::AuthenticationManager___c__DisplayClass37_0()   {
}
//  Writing Method size for method: ::VROSC::AuthenticationManager.get_IsWaitingForCredentials
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::AuthenticationManager::*)()>(&::VROSC::AuthenticationManager::get_IsWaitingForCredentials)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x182cc4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager*>::get(),
                        "get_IsWaitingForCredentials",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AuthenticationManager.set_IsWaitingForCredentials
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AuthenticationManager::*)(bool)>(&::VROSC::AuthenticationManager::set_IsWaitingForCredentials)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x182cc54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager*>::get(),
                        "set_IsWaitingForCredentials",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AuthenticationManager.Awake
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AuthenticationManager::*)()>(&::VROSC::AuthenticationManager::Awake)> {
  constexpr static std::size_t size = 0x328;
  constexpr static std::size_t addrs = 0x182cc60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AuthenticationManager.Setup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AuthenticationManager::*)()>(&::VROSC::AuthenticationManager::Setup)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x182d288;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AuthenticationManager.OnDestroy
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AuthenticationManager::*)()>(&::VROSC::AuthenticationManager::OnDestroy)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x182d330;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AuthenticationManager.Update
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AuthenticationManager::*)()>(&::VROSC::AuthenticationManager::Update)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x182d418;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AuthenticationManager.AuthenticateWithEmail
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AuthenticationManager::*)(::StringW, ::StringW, bool)>(&::VROSC::AuthenticationManager::AuthenticateWithEmail)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x182d434;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager*>::get(),
                        "AuthenticateWithEmail",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AuthenticationManager.CreateUserWithEmail
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AuthenticationManager::*)(::StringW, ::StringW, bool)>(&::VROSC::AuthenticationManager::CreateUserWithEmail)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x182d6f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager*>::get(),
                        "CreateUserWithEmail",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AuthenticationManager.UserLoginSuccess
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AuthenticationManager::*)(::StringW, bool)>(&::VROSC::AuthenticationManager::UserLoginSuccess)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x182d868;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager*>::get(),
                        "UserLoginSuccess",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AuthenticationManager.UserLoginFailure
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AuthenticationManager::*)(::VROSC::Error)>(&::VROSC::AuthenticationManager::UserLoginFailure)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x182d90c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager*>::get(),
                        "UserLoginFailure",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Error>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AuthenticationManager.LogoutUser
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AuthenticationManager::*)()>(&::VROSC::AuthenticationManager::LogoutUser)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x182d978;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager*>::get(),
                        "LogoutUser",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AuthenticationManager.ChangeUserEmail
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AuthenticationManager::*)(::StringW)>(&::VROSC::AuthenticationManager::ChangeUserEmail)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x182d9f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager*>::get(),
                        "ChangeUserEmail",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AuthenticationManager.ChangeUserPassword
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AuthenticationManager::*)(::StringW, ::StringW)>(&::VROSC::AuthenticationManager::ChangeUserPassword)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x182dc58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager*>::get(),
                        "ChangeUserPassword",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AuthenticationManager.SendVerificationEmail
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AuthenticationManager::*)()>(&::VROSC::AuthenticationManager::SendVerificationEmail)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x182deb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager*>::get(),
                        "SendVerificationEmail",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AuthenticationManager.UserHasVerified
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AuthenticationManager::*)()>(&::VROSC::AuthenticationManager::UserHasVerified)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x182e0c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager*>::get(),
                        "UserHasVerified",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AuthenticationManager.ResetPassword
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AuthenticationManager::*)(::StringW)>(&::VROSC::AuthenticationManager::ResetPassword)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x182e124;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager*>::get(),
                        "ResetPassword",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AuthenticationManager.UserLoggedOut
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AuthenticationManager::*)()>(&::VROSC::AuthenticationManager::UserLoggedOut)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x182e318;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager*>::get(),
                        "UserLoggedOut",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AuthenticationManager.UserEmailChangeSuccess
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AuthenticationManager::*)(::StringW)>(&::VROSC::AuthenticationManager::UserEmailChangeSuccess)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x182e578;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager*>::get(),
                        "UserEmailChangeSuccess",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AuthenticationManager.UserEmailChangeFailure
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AuthenticationManager::*)(::VROSC::Error)>(&::VROSC::AuthenticationManager::UserEmailChangeFailure)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x182e77c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager*>::get(),
                        "UserEmailChangeFailure",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Error>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AuthenticationManager.UserPasswordChangeSuccess
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AuthenticationManager::*)(::StringW)>(&::VROSC::AuthenticationManager::UserPasswordChangeSuccess)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x182e7e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager*>::get(),
                        "UserPasswordChangeSuccess",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AuthenticationManager.UserPasswordChangeFailure
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AuthenticationManager::*)(::VROSC::Error)>(&::VROSC::AuthenticationManager::UserPasswordChangeFailure)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x182e890;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager*>::get(),
                        "UserPasswordChangeFailure",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Error>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AuthenticationManager.ResetPasswordSuccess
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AuthenticationManager::*)()>(&::VROSC::AuthenticationManager::ResetPasswordSuccess)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x182e8fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager*>::get(),
                        "ResetPasswordSuccess",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AuthenticationManager.ResetPasswordFailure
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AuthenticationManager::*)(::VROSC::Error)>(&::VROSC::AuthenticationManager::ResetPasswordFailure)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x182e960;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager*>::get(),
                        "ResetPasswordFailure",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Error>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AuthenticationManager.SendVerificationEmailSuccess
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AuthenticationManager::*)()>(&::VROSC::AuthenticationManager::SendVerificationEmailSuccess)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x182e9cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager*>::get(),
                        "SendVerificationEmailSuccess",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AuthenticationManager.SendVerificationEmailFailure
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AuthenticationManager::*)(::VROSC::Error)>(&::VROSC::AuthenticationManager::SendVerificationEmailFailure)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x182ea30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager*>::get(),
                        "SendVerificationEmailFailure",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Error>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AuthenticationManager._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AuthenticationManager::*)()>(&::VROSC::AuthenticationManager::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x182ea9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AuthenticationManager._Awake_b__27_0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::AuthenticationManager::*)()>(&::VROSC::AuthenticationManager::_Awake_b__27_0)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x182eb28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager*>::get(),
                        "<Awake>b__27_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AuthenticationManager._Awake_g__Continue_27_1
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Func_1<bool>* (*)()>(&::VROSC::AuthenticationManager::_Awake_g__Continue_27_1)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x182d04c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager*>::get(),
                        "<Awake>g__Continue|27_1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AuthenticationManager._Awake_g__HasVerifiedUserLoggedIn_27_2
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Func_1<bool>* (::VROSC::AuthenticationManager::*)()>(&::VROSC::AuthenticationManager::_Awake_g__HasVerifiedUserLoggedIn_27_2)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x182d190;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager*>::get(),
                        "<Awake>g__HasVerifiedUserLoggedIn|27_2",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AuthenticationManager._Awake_b__27_6
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::AuthenticationManager::*)()>(&::VROSC::AuthenticationManager::_Awake_b__27_6)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x182eb5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager*>::get(),
                        "<Awake>b__27_6",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AuthenticationManager._Awake_g__HasUnverifiedUserLoggedIn_27_3
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Func_1<bool>* (::VROSC::AuthenticationManager::*)()>(&::VROSC::AuthenticationManager::_Awake_g__HasUnverifiedUserLoggedIn_27_3)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x182d114;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager*>::get(),
                        "<Awake>g__HasUnverifiedUserLoggedIn|27_3",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AuthenticationManager._Awake_b__27_7
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::AuthenticationManager::*)()>(&::VROSC::AuthenticationManager::_Awake_b__27_7)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x182eb90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager*>::get(),
                        "<Awake>b__27_7",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AuthenticationManager._Awake_g__HasUserLoggedOut_27_4
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Func_1<bool>* (::VROSC::AuthenticationManager::*)()>(&::VROSC::AuthenticationManager::_Awake_g__HasUserLoggedOut_27_4)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x182d20c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager*>::get(),
                        "<Awake>g__HasUserLoggedOut|27_4",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AuthenticationManager._Awake_b__27_8
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::AuthenticationManager::*)()>(&::VROSC::AuthenticationManager::_Awake_b__27_8)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x182ebc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager*>::get(),
                        "<Awake>b__27_8",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::VROSC::AuthenticationManager_LocalUserData*& VROSC::AuthenticationManager::__cordl_internal_get_LocalUser()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LocalUser;
}
constexpr ::VROSC::AuthenticationManager_LocalUserData* const& VROSC::AuthenticationManager::__cordl_internal_get_LocalUser() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LocalUser;
}
constexpr void VROSC::AuthenticationManager::__cordl_internal_set_LocalUser(::VROSC::AuthenticationManager_LocalUserData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___LocalUser)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::AuthenticationManager_FirebaseUserData*& VROSC::AuthenticationManager::__cordl_internal_get_FirebaseUser()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FirebaseUser;
}
constexpr ::VROSC::AuthenticationManager_FirebaseUserData* const& VROSC::AuthenticationManager::__cordl_internal_get_FirebaseUser() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FirebaseUser;
}
constexpr void VROSC::AuthenticationManager::__cordl_internal_set_FirebaseUser(::VROSC::AuthenticationManager_FirebaseUserData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___FirebaseUser)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::StateMachine*& VROSC::AuthenticationManager::__cordl_internal_get__stateMachine()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stateMachine;
}
constexpr ::VROSC::StateMachine* const& VROSC::AuthenticationManager::__cordl_internal_get__stateMachine() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stateMachine;
}
constexpr void VROSC::AuthenticationManager::__cordl_internal_set__stateMachine(::VROSC::StateMachine*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____stateMachine)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::IState*& VROSC::AuthenticationManager::__cordl_internal_get__startState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startState;
}
constexpr ::VROSC::IState* const& VROSC::AuthenticationManager::__cordl_internal_get__startState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startState;
}
constexpr void VROSC::AuthenticationManager::__cordl_internal_set__startState(::VROSC::IState*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____startState)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::LoginWithEmailState*& VROSC::AuthenticationManager::__cordl_internal_get__loginWithEmailState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loginWithEmailState;
}
constexpr ::VROSC::LoginWithEmailState* const& VROSC::AuthenticationManager::__cordl_internal_get__loginWithEmailState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loginWithEmailState;
}
constexpr void VROSC::AuthenticationManager::__cordl_internal_set__loginWithEmailState(::VROSC::LoginWithEmailState*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____loginWithEmailState)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& VROSC::AuthenticationManager::__cordl_internal_get__IsWaitingForCredentials_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsWaitingForCredentials_k__BackingField;
}
constexpr bool const& VROSC::AuthenticationManager::__cordl_internal_get__IsWaitingForCredentials_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsWaitingForCredentials_k__BackingField;
}
constexpr void VROSC::AuthenticationManager::__cordl_internal_set__IsWaitingForCredentials_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsWaitingForCredentials_k__BackingField = value;
}
inline void VROSC::AuthenticationManager::setStaticF_OnVerifiedUserLogin(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "OnVerifiedUserLogin", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager*>::get>(std::forward<::System::Action*>(value));
}
inline ::System::Action* VROSC::AuthenticationManager::getStaticF_OnVerifiedUserLogin()  {
return ::cordl_internals::getStaticField<::System::Action*, "OnVerifiedUserLogin", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager*>::get>();
}
inline void VROSC::AuthenticationManager::setStaticF_OnUserLoginSuccess(::System::Action_2<::StringW,bool>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<::StringW,bool>*, "OnUserLoginSuccess", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager*>::get>(std::forward<::System::Action_2<::StringW,bool>*>(value));
}
inline ::System::Action_2<::StringW,bool>* VROSC::AuthenticationManager::getStaticF_OnUserLoginSuccess()  {
return ::cordl_internals::getStaticField<::System::Action_2<::StringW,bool>*, "OnUserLoginSuccess", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager*>::get>();
}
inline void VROSC::AuthenticationManager::setStaticF_OnUserLoginFailure(::System::Action_1<::VROSC::Error>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::VROSC::Error>*, "OnUserLoginFailure", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager*>::get>(std::forward<::System::Action_1<::VROSC::Error>*>(value));
}
inline ::System::Action_1<::VROSC::Error>* VROSC::AuthenticationManager::getStaticF_OnUserLoginFailure()  {
return ::cordl_internals::getStaticField<::System::Action_1<::VROSC::Error>*, "OnUserLoginFailure", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager*>::get>();
}
inline void VROSC::AuthenticationManager::setStaticF_OnUserLogout(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "OnUserLogout", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager*>::get>(std::forward<::System::Action*>(value));
}
inline ::System::Action* VROSC::AuthenticationManager::getStaticF_OnUserLogout()  {
return ::cordl_internals::getStaticField<::System::Action*, "OnUserLogout", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager*>::get>();
}
inline void VROSC::AuthenticationManager::setStaticF_OnRefreshFirebaseAccessTokenSuccess(::System::Action_3<::StringW,::StringW,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Action_3<::StringW,::StringW,::StringW>*, "OnRefreshFirebaseAccessTokenSuccess", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager*>::get>(std::forward<::System::Action_3<::StringW,::StringW,::StringW>*>(value));
}
inline ::System::Action_3<::StringW,::StringW,::StringW>* VROSC::AuthenticationManager::getStaticF_OnRefreshFirebaseAccessTokenSuccess()  {
return ::cordl_internals::getStaticField<::System::Action_3<::StringW,::StringW,::StringW>*, "OnRefreshFirebaseAccessTokenSuccess", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager*>::get>();
}
inline void VROSC::AuthenticationManager::setStaticF_OnRefreshFirebaseAccessTokenFailure(::System::Action_1<::VROSC::Error>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::VROSC::Error>*, "OnRefreshFirebaseAccessTokenFailure", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager*>::get>(std::forward<::System::Action_1<::VROSC::Error>*>(value));
}
inline ::System::Action_1<::VROSC::Error>* VROSC::AuthenticationManager::getStaticF_OnRefreshFirebaseAccessTokenFailure()  {
return ::cordl_internals::getStaticField<::System::Action_1<::VROSC::Error>*, "OnRefreshFirebaseAccessTokenFailure", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager*>::get>();
}
inline void VROSC::AuthenticationManager::setStaticF_OnUserEmailChangeSuccess(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "OnUserEmailChangeSuccess", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager*>::get>(std::forward<::System::Action*>(value));
}
inline ::System::Action* VROSC::AuthenticationManager::getStaticF_OnUserEmailChangeSuccess()  {
return ::cordl_internals::getStaticField<::System::Action*, "OnUserEmailChangeSuccess", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager*>::get>();
}
inline void VROSC::AuthenticationManager::setStaticF_OnUserEmailChangeFailure(::System::Action_1<::VROSC::Error>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::VROSC::Error>*, "OnUserEmailChangeFailure", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager*>::get>(std::forward<::System::Action_1<::VROSC::Error>*>(value));
}
inline ::System::Action_1<::VROSC::Error>* VROSC::AuthenticationManager::getStaticF_OnUserEmailChangeFailure()  {
return ::cordl_internals::getStaticField<::System::Action_1<::VROSC::Error>*, "OnUserEmailChangeFailure", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager*>::get>();
}
inline void VROSC::AuthenticationManager::setStaticF_OnUserPasswordChangeSuccess(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "OnUserPasswordChangeSuccess", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager*>::get>(std::forward<::System::Action*>(value));
}
inline ::System::Action* VROSC::AuthenticationManager::getStaticF_OnUserPasswordChangeSuccess()  {
return ::cordl_internals::getStaticField<::System::Action*, "OnUserPasswordChangeSuccess", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager*>::get>();
}
inline void VROSC::AuthenticationManager::setStaticF_OnUserPasswordChangeFailure(::System::Action_1<::VROSC::Error>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::VROSC::Error>*, "OnUserPasswordChangeFailure", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager*>::get>(std::forward<::System::Action_1<::VROSC::Error>*>(value));
}
inline ::System::Action_1<::VROSC::Error>* VROSC::AuthenticationManager::getStaticF_OnUserPasswordChangeFailure()  {
return ::cordl_internals::getStaticField<::System::Action_1<::VROSC::Error>*, "OnUserPasswordChangeFailure", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager*>::get>();
}
inline void VROSC::AuthenticationManager::setStaticF_OnResetPasswordSuccess(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "OnResetPasswordSuccess", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager*>::get>(std::forward<::System::Action*>(value));
}
inline ::System::Action* VROSC::AuthenticationManager::getStaticF_OnResetPasswordSuccess()  {
return ::cordl_internals::getStaticField<::System::Action*, "OnResetPasswordSuccess", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager*>::get>();
}
inline void VROSC::AuthenticationManager::setStaticF_OnResetPasswordFailure(::System::Action_1<::VROSC::Error>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::VROSC::Error>*, "OnResetPasswordFailure", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager*>::get>(std::forward<::System::Action_1<::VROSC::Error>*>(value));
}
inline ::System::Action_1<::VROSC::Error>* VROSC::AuthenticationManager::getStaticF_OnResetPasswordFailure()  {
return ::cordl_internals::getStaticField<::System::Action_1<::VROSC::Error>*, "OnResetPasswordFailure", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager*>::get>();
}
inline void VROSC::AuthenticationManager::setStaticF_OnSendVerificationEmailSuccess(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "OnSendVerificationEmailSuccess", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager*>::get>(std::forward<::System::Action*>(value));
}
inline ::System::Action* VROSC::AuthenticationManager::getStaticF_OnSendVerificationEmailSuccess()  {
return ::cordl_internals::getStaticField<::System::Action*, "OnSendVerificationEmailSuccess", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager*>::get>();
}
inline void VROSC::AuthenticationManager::setStaticF_OnSendVerificationEmailFailure(::System::Action_1<::VROSC::Error>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::VROSC::Error>*, "OnSendVerificationEmailFailure", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager*>::get>(std::forward<::System::Action_1<::VROSC::Error>*>(value));
}
inline ::System::Action_1<::VROSC::Error>* VROSC::AuthenticationManager::getStaticF_OnSendVerificationEmailFailure()  {
return ::cordl_internals::getStaticField<::System::Action_1<::VROSC::Error>*, "OnSendVerificationEmailFailure", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager*>::get>();
}
inline bool VROSC::AuthenticationManager::get_IsWaitingForCredentials()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager*>::get(),
                        "get_IsWaitingForCredentials",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void VROSC::AuthenticationManager::set_IsWaitingForCredentials(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager*>::get(),
                        "set_IsWaitingForCredentials",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void VROSC::AuthenticationManager::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::AuthenticationManager::Setup()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::AuthenticationManager::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::AuthenticationManager::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::AuthenticationManager::AuthenticateWithEmail(::StringW  email, ::StringW  password, bool  rememberMe)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager*>::get(),
                        "AuthenticateWithEmail",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, email, password, rememberMe);
}
inline void VROSC::AuthenticationManager::CreateUserWithEmail(::StringW  email, ::StringW  password, bool  rememberMe)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager*>::get(),
                        "CreateUserWithEmail",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, email, password, rememberMe);
}
inline void VROSC::AuthenticationManager::UserLoginSuccess(::StringW  email, bool  isVerified)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager*>::get(),
                        "UserLoginSuccess",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, email, isVerified);
}
inline void VROSC::AuthenticationManager::UserLoginFailure(::VROSC::Error  error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager*>::get(),
                        "UserLoginFailure",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Error>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, error);
}
inline void VROSC::AuthenticationManager::LogoutUser()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager*>::get(),
                        "LogoutUser",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::AuthenticationManager::ChangeUserEmail(::StringW  email)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager*>::get(),
                        "ChangeUserEmail",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, email);
}
inline void VROSC::AuthenticationManager::ChangeUserPassword(::StringW  currentPassword, ::StringW  newPassword)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager*>::get(),
                        "ChangeUserPassword",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, currentPassword, newPassword);
}
inline void VROSC::AuthenticationManager::SendVerificationEmail()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager*>::get(),
                        "SendVerificationEmail",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::AuthenticationManager::UserHasVerified()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager*>::get(),
                        "UserHasVerified",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::AuthenticationManager::ResetPassword(::StringW  email)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager*>::get(),
                        "ResetPassword",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, email);
}
inline void VROSC::AuthenticationManager::UserLoggedOut()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager*>::get(),
                        "UserLoggedOut",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::AuthenticationManager::UserEmailChangeSuccess(::StringW  email)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager*>::get(),
                        "UserEmailChangeSuccess",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, email);
}
inline void VROSC::AuthenticationManager::UserEmailChangeFailure(::VROSC::Error  error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager*>::get(),
                        "UserEmailChangeFailure",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Error>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, error);
}
inline void VROSC::AuthenticationManager::UserPasswordChangeSuccess(::StringW  password)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager*>::get(),
                        "UserPasswordChangeSuccess",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, password);
}
inline void VROSC::AuthenticationManager::UserPasswordChangeFailure(::VROSC::Error  error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager*>::get(),
                        "UserPasswordChangeFailure",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Error>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, error);
}
inline void VROSC::AuthenticationManager::ResetPasswordSuccess()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager*>::get(),
                        "ResetPasswordSuccess",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::AuthenticationManager::ResetPasswordFailure(::VROSC::Error  error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager*>::get(),
                        "ResetPasswordFailure",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Error>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, error);
}
inline void VROSC::AuthenticationManager::SendVerificationEmailSuccess()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager*>::get(),
                        "SendVerificationEmailSuccess",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::AuthenticationManager::SendVerificationEmailFailure(::VROSC::Error  error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager*>::get(),
                        "SendVerificationEmailFailure",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Error>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, error);
}
inline void VROSC::AuthenticationManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool VROSC::AuthenticationManager::_Awake_b__27_0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager*>::get(),
                        "<Awake>b__27_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Func_1<bool>* VROSC::AuthenticationManager::_Awake_g__Continue_27_1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager*>::get(),
                        "<Awake>g__Continue|27_1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Func_1<bool>*, false>(nullptr, ___internal_method);
}
inline ::System::Func_1<bool>* VROSC::AuthenticationManager::_Awake_g__HasVerifiedUserLoggedIn_27_2()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager*>::get(),
                        "<Awake>g__HasVerifiedUserLoggedIn|27_2",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Func_1<bool>*, false>(this, ___internal_method);
}
inline bool VROSC::AuthenticationManager::_Awake_b__27_6()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager*>::get(),
                        "<Awake>b__27_6",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Func_1<bool>* VROSC::AuthenticationManager::_Awake_g__HasUnverifiedUserLoggedIn_27_3()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager*>::get(),
                        "<Awake>g__HasUnverifiedUserLoggedIn|27_3",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Func_1<bool>*, false>(this, ___internal_method);
}
inline bool VROSC::AuthenticationManager::_Awake_b__27_7()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager*>::get(),
                        "<Awake>b__27_7",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Func_1<bool>* VROSC::AuthenticationManager::_Awake_g__HasUserLoggedOut_27_4()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager*>::get(),
                        "<Awake>g__HasUserLoggedOut|27_4",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Func_1<bool>*, false>(this, ___internal_method);
}
inline bool VROSC::AuthenticationManager::_Awake_b__27_8()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AuthenticationManager*>::get(),
                        "<Awake>b__27_8",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::VROSC::AuthenticationManager* VROSC::AuthenticationManager::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::AuthenticationManager*>());
}
// Ctor Parameters []
constexpr ::VROSC::AuthenticationManager::AuthenticationManager()   {
}
