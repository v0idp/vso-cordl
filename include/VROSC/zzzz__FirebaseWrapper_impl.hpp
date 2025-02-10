#pragma once
// IWYU pragma private; include "VROSC/FirebaseWrapper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VROSC/zzzz__FirebaseWrapper_def.hpp"
#include "Firebase/Auth/zzzz__FirebaseAuth_def.hpp"
#include "Firebase/Auth/zzzz__FirebaseUser_def.hpp"
#include "Firebase/Firestore/zzzz__CollectionReference_def.hpp"
#include "Firebase/Firestore/zzzz__DocumentReference_def.hpp"
#include "Firebase/Firestore/zzzz__DocumentSnapshot_def.hpp"
#include "Firebase/Firestore/zzzz__FirebaseFirestore_def.hpp"
#include "Firebase/Firestore/zzzz__QuerySnapshot_def.hpp"
#include "Firebase/Firestore/zzzz__WriteBatch_def.hpp"
#include "Firebase/Storage/zzzz__DownloadState_def.hpp"
#include "Firebase/Storage/zzzz__StorageMetadata_def.hpp"
#include "Firebase/Storage/zzzz__StorageReference_def.hpp"
#include "Firebase/Storage/zzzz__UploadState_def.hpp"
#include "Proyecto26/zzzz__ResponseHelper_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/IO/zzzz__FileStream_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__EventArgs_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "VROSC/zzzz__Error_def.hpp"
#include "VROSC/zzzz__FirebaseWrapper_def.hpp"
//  Writing Method size for method: ::VROSC::FirebaseWrapper___c__DisplayClass41_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper___c__DisplayClass41_0::*)()>(&::VROSC::FirebaseWrapper___c__DisplayClass41_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x183435c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass41_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FirebaseWrapper___c__DisplayClass41_0._CreateUserWithEmail_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper___c__DisplayClass41_0::*)(::System::Threading::Tasks::Task_1<::Firebase::Auth::FirebaseUser*>*)>(&::VROSC::FirebaseWrapper___c__DisplayClass41_0::_CreateUserWithEmail_b__0)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x1838e00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass41_0*>::get(),
                        "<CreateUserWithEmail>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<::Firebase::Auth::FirebaseUser*>*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::VROSC::Error>*& VROSC::FirebaseWrapper___c__DisplayClass41_0::__cordl_internal_get_onFailure()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onFailure;
}
constexpr ::System::Action_1<::VROSC::Error>* const& VROSC::FirebaseWrapper___c__DisplayClass41_0::__cordl_internal_get_onFailure() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onFailure;
}
constexpr void VROSC::FirebaseWrapper___c__DisplayClass41_0::__cordl_internal_set_onFailure(::System::Action_1<::VROSC::Error>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onFailure)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::StringW>*& VROSC::FirebaseWrapper___c__DisplayClass41_0::__cordl_internal_get_onSuccess()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSuccess;
}
constexpr ::System::Action_1<::StringW>* const& VROSC::FirebaseWrapper___c__DisplayClass41_0::__cordl_internal_get_onSuccess() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSuccess;
}
constexpr void VROSC::FirebaseWrapper___c__DisplayClass41_0::__cordl_internal_set_onSuccess(::System::Action_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onSuccess)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::FirebaseWrapper*& VROSC::FirebaseWrapper___c__DisplayClass41_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::VROSC::FirebaseWrapper* const& VROSC::FirebaseWrapper___c__DisplayClass41_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void VROSC::FirebaseWrapper___c__DisplayClass41_0::__cordl_internal_set___4__this(::VROSC::FirebaseWrapper*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::FirebaseWrapper___c__DisplayClass41_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass41_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::FirebaseWrapper___c__DisplayClass41_0::_CreateUserWithEmail_b__0(::System::Threading::Tasks::Task_1<::Firebase::Auth::FirebaseUser*>*  task)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass41_0*>::get(),
                        "<CreateUserWithEmail>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<::Firebase::Auth::FirebaseUser*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, task);
}
inline ::VROSC::FirebaseWrapper___c__DisplayClass41_0* VROSC::FirebaseWrapper___c__DisplayClass41_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::FirebaseWrapper___c__DisplayClass41_0*>());
}
// Ctor Parameters []
constexpr ::VROSC::FirebaseWrapper___c__DisplayClass41_0::FirebaseWrapper___c__DisplayClass41_0()   {
}
//  Writing Method size for method: ::VROSC::FirebaseWrapper___c__DisplayClass42_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper___c__DisplayClass42_0::*)()>(&::VROSC::FirebaseWrapper___c__DisplayClass42_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1834364;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass42_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FirebaseWrapper___c__DisplayClass42_0._LoginUserWithEmail_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper___c__DisplayClass42_0::*)(::System::Threading::Tasks::Task_1<::Firebase::Auth::FirebaseUser*>*)>(&::VROSC::FirebaseWrapper___c__DisplayClass42_0::_LoginUserWithEmail_b__0)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x1838f34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass42_0*>::get(),
                        "<LoginUserWithEmail>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<::Firebase::Auth::FirebaseUser*>*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::VROSC::Error>*& VROSC::FirebaseWrapper___c__DisplayClass42_0::__cordl_internal_get_onFailure()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onFailure;
}
constexpr ::System::Action_1<::VROSC::Error>* const& VROSC::FirebaseWrapper___c__DisplayClass42_0::__cordl_internal_get_onFailure() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onFailure;
}
constexpr void VROSC::FirebaseWrapper___c__DisplayClass42_0::__cordl_internal_set_onFailure(::System::Action_1<::VROSC::Error>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onFailure)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_2<::StringW,bool>*& VROSC::FirebaseWrapper___c__DisplayClass42_0::__cordl_internal_get_onSuccess()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSuccess;
}
constexpr ::System::Action_2<::StringW,bool>* const& VROSC::FirebaseWrapper___c__DisplayClass42_0::__cordl_internal_get_onSuccess() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSuccess;
}
constexpr void VROSC::FirebaseWrapper___c__DisplayClass42_0::__cordl_internal_set_onSuccess(::System::Action_2<::StringW,bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onSuccess)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::FirebaseWrapper*& VROSC::FirebaseWrapper___c__DisplayClass42_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::VROSC::FirebaseWrapper* const& VROSC::FirebaseWrapper___c__DisplayClass42_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void VROSC::FirebaseWrapper___c__DisplayClass42_0::__cordl_internal_set___4__this(::VROSC::FirebaseWrapper*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::FirebaseWrapper___c__DisplayClass42_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass42_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::FirebaseWrapper___c__DisplayClass42_0::_LoginUserWithEmail_b__0(::System::Threading::Tasks::Task_1<::Firebase::Auth::FirebaseUser*>*  task)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass42_0*>::get(),
                        "<LoginUserWithEmail>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<::Firebase::Auth::FirebaseUser*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, task);
}
inline ::VROSC::FirebaseWrapper___c__DisplayClass42_0* VROSC::FirebaseWrapper___c__DisplayClass42_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::FirebaseWrapper___c__DisplayClass42_0*>());
}
// Ctor Parameters []
constexpr ::VROSC::FirebaseWrapper___c__DisplayClass42_0::FirebaseWrapper___c__DisplayClass42_0()   {
}
//  Writing Method size for method: ::VROSC::FirebaseWrapper___c__DisplayClass44_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper___c__DisplayClass44_0::*)()>(&::VROSC::FirebaseWrapper___c__DisplayClass44_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x183436c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass44_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FirebaseWrapper___c__DisplayClass44_0._ChangeUserEmail_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper___c__DisplayClass44_0::*)(::System::Threading::Tasks::Task*)>(&::VROSC::FirebaseWrapper___c__DisplayClass44_0::_ChangeUserEmail_b__0)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x1839094;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass44_0*>::get(),
                        "<ChangeUserEmail>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::VROSC::Error>*& VROSC::FirebaseWrapper___c__DisplayClass44_0::__cordl_internal_get_onFailure()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onFailure;
}
constexpr ::System::Action_1<::VROSC::Error>* const& VROSC::FirebaseWrapper___c__DisplayClass44_0::__cordl_internal_get_onFailure() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onFailure;
}
constexpr void VROSC::FirebaseWrapper___c__DisplayClass44_0::__cordl_internal_set_onFailure(::System::Action_1<::VROSC::Error>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onFailure)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::StringW>*& VROSC::FirebaseWrapper___c__DisplayClass44_0::__cordl_internal_get_onSuccess()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSuccess;
}
constexpr ::System::Action_1<::StringW>* const& VROSC::FirebaseWrapper___c__DisplayClass44_0::__cordl_internal_get_onSuccess() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSuccess;
}
constexpr void VROSC::FirebaseWrapper___c__DisplayClass44_0::__cordl_internal_set_onSuccess(::System::Action_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onSuccess)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& VROSC::FirebaseWrapper___c__DisplayClass44_0::__cordl_internal_get_email()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___email;
}
constexpr ::StringW const& VROSC::FirebaseWrapper___c__DisplayClass44_0::__cordl_internal_get_email() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___email;
}
constexpr void VROSC::FirebaseWrapper___c__DisplayClass44_0::__cordl_internal_set_email(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___email)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::FirebaseWrapper___c__DisplayClass44_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass44_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::FirebaseWrapper___c__DisplayClass44_0::_ChangeUserEmail_b__0(::System::Threading::Tasks::Task*  task)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass44_0*>::get(),
                        "<ChangeUserEmail>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, task);
}
inline ::VROSC::FirebaseWrapper___c__DisplayClass44_0* VROSC::FirebaseWrapper___c__DisplayClass44_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::FirebaseWrapper___c__DisplayClass44_0*>());
}
// Ctor Parameters []
constexpr ::VROSC::FirebaseWrapper___c__DisplayClass44_0::FirebaseWrapper___c__DisplayClass44_0()   {
}
//  Writing Method size for method: ::VROSC::FirebaseWrapper___c__DisplayClass45_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper___c__DisplayClass45_0::*)()>(&::VROSC::FirebaseWrapper___c__DisplayClass45_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1834374;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass45_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FirebaseWrapper___c__DisplayClass45_0._ChangeUserPassword_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper___c__DisplayClass45_0::*)(::System::Threading::Tasks::Task*)>(&::VROSC::FirebaseWrapper___c__DisplayClass45_0::_ChangeUserPassword_b__0)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x183919c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass45_0*>::get(),
                        "<ChangeUserPassword>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::VROSC::Error>*& VROSC::FirebaseWrapper___c__DisplayClass45_0::__cordl_internal_get_onFailure()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onFailure;
}
constexpr ::System::Action_1<::VROSC::Error>* const& VROSC::FirebaseWrapper___c__DisplayClass45_0::__cordl_internal_get_onFailure() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onFailure;
}
constexpr void VROSC::FirebaseWrapper___c__DisplayClass45_0::__cordl_internal_set_onFailure(::System::Action_1<::VROSC::Error>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onFailure)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::StringW>*& VROSC::FirebaseWrapper___c__DisplayClass45_0::__cordl_internal_get_onSuccess()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSuccess;
}
constexpr ::System::Action_1<::StringW>* const& VROSC::FirebaseWrapper___c__DisplayClass45_0::__cordl_internal_get_onSuccess() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSuccess;
}
constexpr void VROSC::FirebaseWrapper___c__DisplayClass45_0::__cordl_internal_set_onSuccess(::System::Action_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onSuccess)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& VROSC::FirebaseWrapper___c__DisplayClass45_0::__cordl_internal_get_password()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___password;
}
constexpr ::StringW const& VROSC::FirebaseWrapper___c__DisplayClass45_0::__cordl_internal_get_password() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___password;
}
constexpr void VROSC::FirebaseWrapper___c__DisplayClass45_0::__cordl_internal_set_password(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___password)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::FirebaseWrapper___c__DisplayClass45_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass45_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::FirebaseWrapper___c__DisplayClass45_0::_ChangeUserPassword_b__0(::System::Threading::Tasks::Task*  task)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass45_0*>::get(),
                        "<ChangeUserPassword>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, task);
}
inline ::VROSC::FirebaseWrapper___c__DisplayClass45_0* VROSC::FirebaseWrapper___c__DisplayClass45_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::FirebaseWrapper___c__DisplayClass45_0*>());
}
// Ctor Parameters []
constexpr ::VROSC::FirebaseWrapper___c__DisplayClass45_0::FirebaseWrapper___c__DisplayClass45_0()   {
}
//  Writing Method size for method: ::VROSC::FirebaseWrapper___c__DisplayClass46_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper___c__DisplayClass46_0::*)()>(&::VROSC::FirebaseWrapper___c__DisplayClass46_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x183437c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass46_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FirebaseWrapper___c__DisplayClass46_0._ResetPassword_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper___c__DisplayClass46_0::*)(::System::Threading::Tasks::Task*)>(&::VROSC::FirebaseWrapper___c__DisplayClass46_0::_ResetPassword_b__0)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x18392a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass46_0*>::get(),
                        "<ResetPassword>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::VROSC::Error>*& VROSC::FirebaseWrapper___c__DisplayClass46_0::__cordl_internal_get_onFailure()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onFailure;
}
constexpr ::System::Action_1<::VROSC::Error>* const& VROSC::FirebaseWrapper___c__DisplayClass46_0::__cordl_internal_get_onFailure() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onFailure;
}
constexpr void VROSC::FirebaseWrapper___c__DisplayClass46_0::__cordl_internal_set_onFailure(::System::Action_1<::VROSC::Error>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onFailure)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& VROSC::FirebaseWrapper___c__DisplayClass46_0::__cordl_internal_get_onSuccess()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSuccess;
}
constexpr ::System::Action* const& VROSC::FirebaseWrapper___c__DisplayClass46_0::__cordl_internal_get_onSuccess() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSuccess;
}
constexpr void VROSC::FirebaseWrapper___c__DisplayClass46_0::__cordl_internal_set_onSuccess(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onSuccess)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::FirebaseWrapper___c__DisplayClass46_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass46_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::FirebaseWrapper___c__DisplayClass46_0::_ResetPassword_b__0(::System::Threading::Tasks::Task*  task)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass46_0*>::get(),
                        "<ResetPassword>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, task);
}
inline ::VROSC::FirebaseWrapper___c__DisplayClass46_0* VROSC::FirebaseWrapper___c__DisplayClass46_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::FirebaseWrapper___c__DisplayClass46_0*>());
}
// Ctor Parameters []
constexpr ::VROSC::FirebaseWrapper___c__DisplayClass46_0::FirebaseWrapper___c__DisplayClass46_0()   {
}
//  Writing Method size for method: ::VROSC::FirebaseWrapper___c__DisplayClass48_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper___c__DisplayClass48_0::*)()>(&::VROSC::FirebaseWrapper___c__DisplayClass48_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1834384;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass48_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FirebaseWrapper___c__DisplayClass48_0._SendVerificationEmail_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper___c__DisplayClass48_0::*)(::System::Threading::Tasks::Task*)>(&::VROSC::FirebaseWrapper___c__DisplayClass48_0::_SendVerificationEmail_b__0)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x18393a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass48_0*>::get(),
                        "<SendVerificationEmail>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::VROSC::Error>*& VROSC::FirebaseWrapper___c__DisplayClass48_0::__cordl_internal_get_onFailure()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onFailure;
}
constexpr ::System::Action_1<::VROSC::Error>* const& VROSC::FirebaseWrapper___c__DisplayClass48_0::__cordl_internal_get_onFailure() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onFailure;
}
constexpr void VROSC::FirebaseWrapper___c__DisplayClass48_0::__cordl_internal_set_onFailure(::System::Action_1<::VROSC::Error>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onFailure)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& VROSC::FirebaseWrapper___c__DisplayClass48_0::__cordl_internal_get_onSuccess()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSuccess;
}
constexpr ::System::Action* const& VROSC::FirebaseWrapper___c__DisplayClass48_0::__cordl_internal_get_onSuccess() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSuccess;
}
constexpr void VROSC::FirebaseWrapper___c__DisplayClass48_0::__cordl_internal_set_onSuccess(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onSuccess)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::FirebaseWrapper___c__DisplayClass48_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass48_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::FirebaseWrapper___c__DisplayClass48_0::_SendVerificationEmail_b__0(::System::Threading::Tasks::Task*  task)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass48_0*>::get(),
                        "<SendVerificationEmail>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, task);
}
inline ::VROSC::FirebaseWrapper___c__DisplayClass48_0* VROSC::FirebaseWrapper___c__DisplayClass48_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::FirebaseWrapper___c__DisplayClass48_0*>());
}
// Ctor Parameters []
constexpr ::VROSC::FirebaseWrapper___c__DisplayClass48_0::FirebaseWrapper___c__DisplayClass48_0()   {
}
//  Writing Method size for method: ::VROSC::FirebaseWrapper___c__DisplayClass50_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper___c__DisplayClass50_0::*)()>(&::VROSC::FirebaseWrapper___c__DisplayClass50_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18345ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass50_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FirebaseWrapper___c__DisplayClass50_0._CommitFirestoreBatchWrite_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper___c__DisplayClass50_0::*)(::System::Threading::Tasks::Task*)>(&::VROSC::FirebaseWrapper___c__DisplayClass50_0::_CommitFirestoreBatchWrite_b__0)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x18394ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass50_0*>::get(),
                        "<CommitFirestoreBatchWrite>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::VROSC::Error>*& VROSC::FirebaseWrapper___c__DisplayClass50_0::__cordl_internal_get_onFailure()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onFailure;
}
constexpr ::System::Action_1<::VROSC::Error>* const& VROSC::FirebaseWrapper___c__DisplayClass50_0::__cordl_internal_get_onFailure() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onFailure;
}
constexpr void VROSC::FirebaseWrapper___c__DisplayClass50_0::__cordl_internal_set_onFailure(::System::Action_1<::VROSC::Error>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onFailure)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& VROSC::FirebaseWrapper___c__DisplayClass50_0::__cordl_internal_get_onSuccess()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSuccess;
}
constexpr ::System::Action* const& VROSC::FirebaseWrapper___c__DisplayClass50_0::__cordl_internal_get_onSuccess() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSuccess;
}
constexpr void VROSC::FirebaseWrapper___c__DisplayClass50_0::__cordl_internal_set_onSuccess(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onSuccess)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::FirebaseWrapper___c__DisplayClass50_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass50_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::FirebaseWrapper___c__DisplayClass50_0::_CommitFirestoreBatchWrite_b__0(::System::Threading::Tasks::Task*  task)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass50_0*>::get(),
                        "<CommitFirestoreBatchWrite>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, task);
}
inline ::VROSC::FirebaseWrapper___c__DisplayClass50_0* VROSC::FirebaseWrapper___c__DisplayClass50_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::FirebaseWrapper___c__DisplayClass50_0*>());
}
// Ctor Parameters []
constexpr ::VROSC::FirebaseWrapper___c__DisplayClass50_0::FirebaseWrapper___c__DisplayClass50_0()   {
}
//  Writing Method size for method: ::VROSC::FirebaseWrapper___c__DisplayClass51_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper___c__DisplayClass51_0::*)()>(&::VROSC::FirebaseWrapper___c__DisplayClass51_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18347b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass51_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FirebaseWrapper___c__DisplayClass51_0._GetUserSessions_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper___c__DisplayClass51_0::*)(::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*)>(&::VROSC::FirebaseWrapper___c__DisplayClass51_0::_GetUserSessions_b__0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1839664;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass51_0*>::get(),
                        "<GetUserSessions>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*>*& VROSC::FirebaseWrapper___c__DisplayClass51_0::__cordl_internal_get_onSuccess()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSuccess;
}
constexpr ::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*>* const& VROSC::FirebaseWrapper___c__DisplayClass51_0::__cordl_internal_get_onSuccess() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSuccess;
}
constexpr void VROSC::FirebaseWrapper___c__DisplayClass51_0::__cordl_internal_set_onSuccess(::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onSuccess)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::FirebaseWrapper___c__DisplayClass51_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass51_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::FirebaseWrapper___c__DisplayClass51_0::_GetUserSessions_b__0(::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*  sessionsDocuments)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass51_0*>::get(),
                        "<GetUserSessions>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sessionsDocuments);
}
inline ::VROSC::FirebaseWrapper___c__DisplayClass51_0* VROSC::FirebaseWrapper___c__DisplayClass51_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::FirebaseWrapper___c__DisplayClass51_0*>());
}
// Ctor Parameters []
constexpr ::VROSC::FirebaseWrapper___c__DisplayClass51_0::FirebaseWrapper___c__DisplayClass51_0()   {
}
//  Writing Method size for method: ::VROSC::FirebaseWrapper___c__DisplayClass52_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper___c__DisplayClass52_0::*)()>(&::VROSC::FirebaseWrapper___c__DisplayClass52_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1834a60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass52_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FirebaseWrapper___c__DisplayClass52_0._GetUserPreferences_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper___c__DisplayClass52_0::*)(::System::Collections::Generic::IEnumerable_1<::Firebase::Firestore::DocumentSnapshot*>*)>(&::VROSC::FirebaseWrapper___c__DisplayClass52_0::_GetUserPreferences_b__0)> {
  constexpr static std::size_t size = 0x504;
  constexpr static std::size_t addrs = 0x1839680;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass52_0*>::get(),
                        "<GetUserPreferences>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::Firebase::Firestore::DocumentSnapshot*>*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*& VROSC::FirebaseWrapper___c__DisplayClass52_0::__cordl_internal_get_onSuccess()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSuccess;
}
constexpr ::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>* const& VROSC::FirebaseWrapper___c__DisplayClass52_0::__cordl_internal_get_onSuccess() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSuccess;
}
constexpr void VROSC::FirebaseWrapper___c__DisplayClass52_0::__cordl_internal_set_onSuccess(::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onSuccess)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::FirebaseWrapper___c__DisplayClass52_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass52_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::FirebaseWrapper___c__DisplayClass52_0::_GetUserPreferences_b__0(::System::Collections::Generic::IEnumerable_1<::Firebase::Firestore::DocumentSnapshot*>*  preferencesDocuments)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass52_0*>::get(),
                        "<GetUserPreferences>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::Firebase::Firestore::DocumentSnapshot*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, preferencesDocuments);
}
inline ::VROSC::FirebaseWrapper___c__DisplayClass52_0* VROSC::FirebaseWrapper___c__DisplayClass52_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::FirebaseWrapper___c__DisplayClass52_0*>());
}
// Ctor Parameters []
constexpr ::VROSC::FirebaseWrapper___c__DisplayClass52_0::FirebaseWrapper___c__DisplayClass52_0()   {
}
//  Writing Method size for method: ::VROSC::FirebaseWrapper___c__DisplayClass56_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper___c__DisplayClass56_0::*)()>(&::VROSC::FirebaseWrapper___c__DisplayClass56_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18351a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass56_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FirebaseWrapper___c__DisplayClass56_0._GetUserFavorites_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper___c__DisplayClass56_0::*)(::System::Collections::Generic::IEnumerable_1<::Firebase::Firestore::DocumentSnapshot*>*)>(&::VROSC::FirebaseWrapper___c__DisplayClass56_0::_GetUserFavorites_b__0)> {
  constexpr static std::size_t size = 0x58c;
  constexpr static std::size_t addrs = 0x1839b84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass56_0*>::get(),
                        "<GetUserFavorites>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::Firebase::Firestore::DocumentSnapshot*>*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::VROSC::FirebaseWrapper*& VROSC::FirebaseWrapper___c__DisplayClass56_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::VROSC::FirebaseWrapper* const& VROSC::FirebaseWrapper___c__DisplayClass56_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void VROSC::FirebaseWrapper___c__DisplayClass56_0::__cordl_internal_set___4__this(::VROSC::FirebaseWrapper*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*>*& VROSC::FirebaseWrapper___c__DisplayClass56_0::__cordl_internal_get_onSuccess()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSuccess;
}
constexpr ::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*>* const& VROSC::FirebaseWrapper___c__DisplayClass56_0::__cordl_internal_get_onSuccess() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSuccess;
}
constexpr void VROSC::FirebaseWrapper___c__DisplayClass56_0::__cordl_internal_set_onSuccess(::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onSuccess)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::FirebaseWrapper___c__DisplayClass56_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass56_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::FirebaseWrapper___c__DisplayClass56_0::_GetUserFavorites_b__0(::System::Collections::Generic::IEnumerable_1<::Firebase::Firestore::DocumentSnapshot*>*  favoritesDocuments)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass56_0*>::get(),
                        "<GetUserFavorites>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::Firebase::Firestore::DocumentSnapshot*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, favoritesDocuments);
}
inline ::VROSC::FirebaseWrapper___c__DisplayClass56_0* VROSC::FirebaseWrapper___c__DisplayClass56_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::FirebaseWrapper___c__DisplayClass56_0*>());
}
// Ctor Parameters []
constexpr ::VROSC::FirebaseWrapper___c__DisplayClass56_0::FirebaseWrapper___c__DisplayClass56_0()   {
}
//  Writing Method size for method: ::VROSC::FirebaseWrapper___c__DisplayClass56_1._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper___c__DisplayClass56_1::*)()>(&::VROSC::FirebaseWrapper___c__DisplayClass56_1::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x183a110;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass56_1*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*& VROSC::FirebaseWrapper___c__DisplayClass56_1::__cordl_internal_get_result()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___result;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>* const& VROSC::FirebaseWrapper___c__DisplayClass56_1::__cordl_internal_get_result() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___result;
}
constexpr void VROSC::FirebaseWrapper___c__DisplayClass56_1::__cordl_internal_set_result(::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___result)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& VROSC::FirebaseWrapper___c__DisplayClass56_1::__cordl_internal_get_sessionCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sessionCount;
}
constexpr int32_t const& VROSC::FirebaseWrapper___c__DisplayClass56_1::__cordl_internal_get_sessionCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sessionCount;
}
constexpr void VROSC::FirebaseWrapper___c__DisplayClass56_1::__cordl_internal_set_sessionCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sessionCount = value;
}
constexpr ::VROSC::FirebaseWrapper___c__DisplayClass56_0*& VROSC::FirebaseWrapper___c__DisplayClass56_1::__cordl_internal_get_CS$__8__locals1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CS$__8__locals1;
}
constexpr ::VROSC::FirebaseWrapper___c__DisplayClass56_0* const& VROSC::FirebaseWrapper___c__DisplayClass56_1::__cordl_internal_get_CS$__8__locals1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CS$__8__locals1;
}
constexpr void VROSC::FirebaseWrapper___c__DisplayClass56_1::__cordl_internal_set_CS$__8__locals1(::VROSC::FirebaseWrapper___c__DisplayClass56_0*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___CS$__8__locals1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::FirebaseWrapper___c__DisplayClass56_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass56_1*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::FirebaseWrapper___c__DisplayClass56_1* VROSC::FirebaseWrapper___c__DisplayClass56_1::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::FirebaseWrapper___c__DisplayClass56_1*>());
}
// Ctor Parameters []
constexpr ::VROSC::FirebaseWrapper___c__DisplayClass56_1::FirebaseWrapper___c__DisplayClass56_1()   {
}
//  Writing Method size for method: ::VROSC::FirebaseWrapper___c__DisplayClass56_2._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper___c__DisplayClass56_2::*)()>(&::VROSC::FirebaseWrapper___c__DisplayClass56_2::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x183a118;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass56_2*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FirebaseWrapper___c__DisplayClass56_2._GetUserFavorites_b__1
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper___c__DisplayClass56_2::*)(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*)>(&::VROSC::FirebaseWrapper___c__DisplayClass56_2::_GetUserFavorites_b__1)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x183a128;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass56_2*>::get(),
                        "<GetUserFavorites>b__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::Firebase::Firestore::DocumentSnapshot*& VROSC::FirebaseWrapper___c__DisplayClass56_2::__cordl_internal_get_favoriteDocument()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___favoriteDocument;
}
constexpr ::Firebase::Firestore::DocumentSnapshot* const& VROSC::FirebaseWrapper___c__DisplayClass56_2::__cordl_internal_get_favoriteDocument() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___favoriteDocument;
}
constexpr void VROSC::FirebaseWrapper___c__DisplayClass56_2::__cordl_internal_set_favoriteDocument(::Firebase::Firestore::DocumentSnapshot*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___favoriteDocument)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::FirebaseWrapper___c__DisplayClass56_1*& VROSC::FirebaseWrapper___c__DisplayClass56_2::__cordl_internal_get_CS$__8__locals2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CS$__8__locals2;
}
constexpr ::VROSC::FirebaseWrapper___c__DisplayClass56_1* const& VROSC::FirebaseWrapper___c__DisplayClass56_2::__cordl_internal_get_CS$__8__locals2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CS$__8__locals2;
}
constexpr void VROSC::FirebaseWrapper___c__DisplayClass56_2::__cordl_internal_set_CS$__8__locals2(::VROSC::FirebaseWrapper___c__DisplayClass56_1*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___CS$__8__locals2)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::FirebaseWrapper___c__DisplayClass56_2::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass56_2*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::FirebaseWrapper___c__DisplayClass56_2::_GetUserFavorites_b__1(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  sessionDocDict)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass56_2*>::get(),
                        "<GetUserFavorites>b__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sessionDocDict);
}
inline ::VROSC::FirebaseWrapper___c__DisplayClass56_2* VROSC::FirebaseWrapper___c__DisplayClass56_2::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::FirebaseWrapper___c__DisplayClass56_2*>());
}
// Ctor Parameters []
constexpr ::VROSC::FirebaseWrapper___c__DisplayClass56_2::FirebaseWrapper___c__DisplayClass56_2()   {
}
//  Writing Method size for method: ::VROSC::FirebaseWrapper___c__DisplayClass56_3._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper___c__DisplayClass56_3::*)()>(&::VROSC::FirebaseWrapper___c__DisplayClass56_3::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x183a120;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass56_3*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FirebaseWrapper___c__DisplayClass56_3._GetUserFavorites_b__2
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper___c__DisplayClass56_3::*)(::VROSC::Error)>(&::VROSC::FirebaseWrapper___c__DisplayClass56_3::_GetUserFavorites_b__2)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x183a240;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass56_3*>::get(),
                        "<GetUserFavorites>b__2",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Error>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& VROSC::FirebaseWrapper___c__DisplayClass56_3::__cordl_internal_get_sessionId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sessionId;
}
constexpr ::StringW const& VROSC::FirebaseWrapper___c__DisplayClass56_3::__cordl_internal_get_sessionId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sessionId;
}
constexpr void VROSC::FirebaseWrapper___c__DisplayClass56_3::__cordl_internal_set_sessionId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sessionId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::FirebaseWrapper___c__DisplayClass56_2*& VROSC::FirebaseWrapper___c__DisplayClass56_3::__cordl_internal_get_CS$__8__locals3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CS$__8__locals3;
}
constexpr ::VROSC::FirebaseWrapper___c__DisplayClass56_2* const& VROSC::FirebaseWrapper___c__DisplayClass56_3::__cordl_internal_get_CS$__8__locals3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CS$__8__locals3;
}
constexpr void VROSC::FirebaseWrapper___c__DisplayClass56_3::__cordl_internal_set_CS$__8__locals3(::VROSC::FirebaseWrapper___c__DisplayClass56_2*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___CS$__8__locals3)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::FirebaseWrapper___c__DisplayClass56_3::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass56_3*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::FirebaseWrapper___c__DisplayClass56_3::_GetUserFavorites_b__2(::VROSC::Error  error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass56_3*>::get(),
                        "<GetUserFavorites>b__2",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Error>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, error);
}
inline ::VROSC::FirebaseWrapper___c__DisplayClass56_3* VROSC::FirebaseWrapper___c__DisplayClass56_3::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::FirebaseWrapper___c__DisplayClass56_3*>());
}
// Ctor Parameters []
constexpr ::VROSC::FirebaseWrapper___c__DisplayClass56_3::FirebaseWrapper___c__DisplayClass56_3()   {
}
//  Writing Method size for method: ::VROSC::FirebaseWrapper___c__DisplayClass57_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper___c__DisplayClass57_0::*)()>(&::VROSC::FirebaseWrapper___c__DisplayClass57_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18353a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass57_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FirebaseWrapper___c__DisplayClass57_0._GetUserUpVotes_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper___c__DisplayClass57_0::*)(::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*)>(&::VROSC::FirebaseWrapper___c__DisplayClass57_0::_GetUserUpVotes_b__0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x183a328;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass57_0*>::get(),
                        "<GetUserUpVotes>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*>*& VROSC::FirebaseWrapper___c__DisplayClass57_0::__cordl_internal_get_onSuccess()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSuccess;
}
constexpr ::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*>* const& VROSC::FirebaseWrapper___c__DisplayClass57_0::__cordl_internal_get_onSuccess() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSuccess;
}
constexpr void VROSC::FirebaseWrapper___c__DisplayClass57_0::__cordl_internal_set_onSuccess(::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onSuccess)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::FirebaseWrapper___c__DisplayClass57_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass57_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::FirebaseWrapper___c__DisplayClass57_0::_GetUserUpVotes_b__0(::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*  upVotesDocuments)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass57_0*>::get(),
                        "<GetUserUpVotes>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, upVotesDocuments);
}
inline ::VROSC::FirebaseWrapper___c__DisplayClass57_0* VROSC::FirebaseWrapper___c__DisplayClass57_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::FirebaseWrapper___c__DisplayClass57_0*>());
}
// Ctor Parameters []
constexpr ::VROSC::FirebaseWrapper___c__DisplayClass57_0::FirebaseWrapper___c__DisplayClass57_0()   {
}
//  Writing Method size for method: ::VROSC::FirebaseWrapper___c__DisplayClass58_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper___c__DisplayClass58_0::*)()>(&::VROSC::FirebaseWrapper___c__DisplayClass58_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18354e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass58_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FirebaseWrapper___c__DisplayClass58_0._GetCommunitySessions_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper___c__DisplayClass58_0::*)(::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*)>(&::VROSC::FirebaseWrapper___c__DisplayClass58_0::_GetCommunitySessions_b__0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x183a344;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass58_0*>::get(),
                        "<GetCommunitySessions>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*>*& VROSC::FirebaseWrapper___c__DisplayClass58_0::__cordl_internal_get_onSuccess()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSuccess;
}
constexpr ::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*>* const& VROSC::FirebaseWrapper___c__DisplayClass58_0::__cordl_internal_get_onSuccess() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSuccess;
}
constexpr void VROSC::FirebaseWrapper___c__DisplayClass58_0::__cordl_internal_set_onSuccess(::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onSuccess)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::FirebaseWrapper___c__DisplayClass58_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass58_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::FirebaseWrapper___c__DisplayClass58_0::_GetCommunitySessions_b__0(::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*  sessionsDocuments)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass58_0*>::get(),
                        "<GetCommunitySessions>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sessionsDocuments);
}
inline ::VROSC::FirebaseWrapper___c__DisplayClass58_0* VROSC::FirebaseWrapper___c__DisplayClass58_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::FirebaseWrapper___c__DisplayClass58_0*>());
}
// Ctor Parameters []
constexpr ::VROSC::FirebaseWrapper___c__DisplayClass58_0::FirebaseWrapper___c__DisplayClass58_0()   {
}
//  Writing Method size for method: ::VROSC::FirebaseWrapper___c__DisplayClass62_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper___c__DisplayClass62_0::*)()>(&::VROSC::FirebaseWrapper___c__DisplayClass62_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1835d50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass62_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FirebaseWrapper___c__DisplayClass62_0._SaveUserProfile_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper___c__DisplayClass62_0::*)()>(&::VROSC::FirebaseWrapper___c__DisplayClass62_0::_SaveUserProfile_b__0)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x183a360;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass62_0*>::get(),
                        "<SaveUserProfile>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action*& VROSC::FirebaseWrapper___c__DisplayClass62_0::__cordl_internal_get_onSuccess()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSuccess;
}
constexpr ::System::Action* const& VROSC::FirebaseWrapper___c__DisplayClass62_0::__cordl_internal_get_onSuccess() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSuccess;
}
constexpr void VROSC::FirebaseWrapper___c__DisplayClass62_0::__cordl_internal_set_onSuccess(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onSuccess)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*& VROSC::FirebaseWrapper___c__DisplayClass62_0::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* const& VROSC::FirebaseWrapper___c__DisplayClass62_0::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr void VROSC::FirebaseWrapper___c__DisplayClass62_0::__cordl_internal_set_data(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___data)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::FirebaseWrapper*& VROSC::FirebaseWrapper___c__DisplayClass62_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::VROSC::FirebaseWrapper* const& VROSC::FirebaseWrapper___c__DisplayClass62_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void VROSC::FirebaseWrapper___c__DisplayClass62_0::__cordl_internal_set___4__this(::VROSC::FirebaseWrapper*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::FirebaseWrapper___c__DisplayClass62_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass62_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::FirebaseWrapper___c__DisplayClass62_0::_SaveUserProfile_b__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass62_0*>::get(),
                        "<SaveUserProfile>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::FirebaseWrapper___c__DisplayClass62_0* VROSC::FirebaseWrapper___c__DisplayClass62_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::FirebaseWrapper___c__DisplayClass62_0*>());
}
// Ctor Parameters []
constexpr ::VROSC::FirebaseWrapper___c__DisplayClass62_0::FirebaseWrapper___c__DisplayClass62_0()   {
}
//  Writing Method size for method: ::VROSC::FirebaseWrapper___c__DisplayClass76_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper___c__DisplayClass76_0::*)()>(&::VROSC::FirebaseWrapper___c__DisplayClass76_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x183731c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass76_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FirebaseWrapper___c__DisplayClass76_0._AddSessionUpVote_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper___c__DisplayClass76_0::*)(::StringW)>(&::VROSC::FirebaseWrapper___c__DisplayClass76_0::_AddSessionUpVote_b__0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x183a448;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass76_0*>::get(),
                        "<AddSessionUpVote>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FirebaseWrapper___c__DisplayClass76_0._AddSessionUpVote_b__1
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper___c__DisplayClass76_0::*)()>(&::VROSC::FirebaseWrapper___c__DisplayClass76_0::_AddSessionUpVote_b__1)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x183a450;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass76_0*>::get(),
                        "<AddSessionUpVote>b__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::StringW>*& VROSC::FirebaseWrapper___c__DisplayClass76_0::__cordl_internal_get_onSuccess()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSuccess;
}
constexpr ::System::Action_1<::StringW>* const& VROSC::FirebaseWrapper___c__DisplayClass76_0::__cordl_internal_get_onSuccess() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSuccess;
}
constexpr void VROSC::FirebaseWrapper___c__DisplayClass76_0::__cordl_internal_set_onSuccess(::System::Action_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onSuccess)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& VROSC::FirebaseWrapper___c__DisplayClass76_0::__cordl_internal_get_docId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___docId;
}
constexpr ::StringW const& VROSC::FirebaseWrapper___c__DisplayClass76_0::__cordl_internal_get_docId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___docId;
}
constexpr void VROSC::FirebaseWrapper___c__DisplayClass76_0::__cordl_internal_set_docId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___docId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::FirebaseWrapper___c__DisplayClass76_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass76_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::FirebaseWrapper___c__DisplayClass76_0::_AddSessionUpVote_b__0(::StringW  id)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass76_0*>::get(),
                        "<AddSessionUpVote>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, id);
}
inline void VROSC::FirebaseWrapper___c__DisplayClass76_0::_AddSessionUpVote_b__1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass76_0*>::get(),
                        "<AddSessionUpVote>b__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::FirebaseWrapper___c__DisplayClass76_0* VROSC::FirebaseWrapper___c__DisplayClass76_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::FirebaseWrapper___c__DisplayClass76_0*>());
}
// Ctor Parameters []
constexpr ::VROSC::FirebaseWrapper___c__DisplayClass76_0::FirebaseWrapper___c__DisplayClass76_0()   {
}
//  Writing Method size for method: ::VROSC::FirebaseWrapper___c__DisplayClass78_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper___c__DisplayClass78_0::*)()>(&::VROSC::FirebaseWrapper___c__DisplayClass78_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1837b0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass78_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FirebaseWrapper___c__DisplayClass78_0._AddSessionFavorite_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper___c__DisplayClass78_0::*)(::StringW)>(&::VROSC::FirebaseWrapper___c__DisplayClass78_0::_AddSessionFavorite_b__0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x183a470;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass78_0*>::get(),
                        "<AddSessionFavorite>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FirebaseWrapper___c__DisplayClass78_0._AddSessionFavorite_b__1
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper___c__DisplayClass78_0::*)()>(&::VROSC::FirebaseWrapper___c__DisplayClass78_0::_AddSessionFavorite_b__1)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x183a478;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass78_0*>::get(),
                        "<AddSessionFavorite>b__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::StringW>*& VROSC::FirebaseWrapper___c__DisplayClass78_0::__cordl_internal_get_onSuccess()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSuccess;
}
constexpr ::System::Action_1<::StringW>* const& VROSC::FirebaseWrapper___c__DisplayClass78_0::__cordl_internal_get_onSuccess() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSuccess;
}
constexpr void VROSC::FirebaseWrapper___c__DisplayClass78_0::__cordl_internal_set_onSuccess(::System::Action_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onSuccess)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& VROSC::FirebaseWrapper___c__DisplayClass78_0::__cordl_internal_get_docId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___docId;
}
constexpr ::StringW const& VROSC::FirebaseWrapper___c__DisplayClass78_0::__cordl_internal_get_docId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___docId;
}
constexpr void VROSC::FirebaseWrapper___c__DisplayClass78_0::__cordl_internal_set_docId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___docId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::FirebaseWrapper___c__DisplayClass78_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass78_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::FirebaseWrapper___c__DisplayClass78_0::_AddSessionFavorite_b__0(::StringW  id)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass78_0*>::get(),
                        "<AddSessionFavorite>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, id);
}
inline void VROSC::FirebaseWrapper___c__DisplayClass78_0::_AddSessionFavorite_b__1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass78_0*>::get(),
                        "<AddSessionFavorite>b__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::FirebaseWrapper___c__DisplayClass78_0* VROSC::FirebaseWrapper___c__DisplayClass78_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::FirebaseWrapper___c__DisplayClass78_0*>());
}
// Ctor Parameters []
constexpr ::VROSC::FirebaseWrapper___c__DisplayClass78_0::FirebaseWrapper___c__DisplayClass78_0()   {
}
//  Writing Method size for method: ::VROSC::FirebaseWrapper___c__DisplayClass80_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper___c__DisplayClass80_0::*)()>(&::VROSC::FirebaseWrapper___c__DisplayClass80_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x183810c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass80_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FirebaseWrapper___c__DisplayClass80_0._AddSessionDownload_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper___c__DisplayClass80_0::*)(::StringW)>(&::VROSC::FirebaseWrapper___c__DisplayClass80_0::_AddSessionDownload_b__0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x183a498;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass80_0*>::get(),
                        "<AddSessionDownload>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FirebaseWrapper___c__DisplayClass80_0._AddSessionDownload_b__1
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper___c__DisplayClass80_0::*)()>(&::VROSC::FirebaseWrapper___c__DisplayClass80_0::_AddSessionDownload_b__1)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x183a4a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass80_0*>::get(),
                        "<AddSessionDownload>b__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::StringW>*& VROSC::FirebaseWrapper___c__DisplayClass80_0::__cordl_internal_get_onSuccess()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSuccess;
}
constexpr ::System::Action_1<::StringW>* const& VROSC::FirebaseWrapper___c__DisplayClass80_0::__cordl_internal_get_onSuccess() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSuccess;
}
constexpr void VROSC::FirebaseWrapper___c__DisplayClass80_0::__cordl_internal_set_onSuccess(::System::Action_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onSuccess)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& VROSC::FirebaseWrapper___c__DisplayClass80_0::__cordl_internal_get_docId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___docId;
}
constexpr ::StringW const& VROSC::FirebaseWrapper___c__DisplayClass80_0::__cordl_internal_get_docId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___docId;
}
constexpr void VROSC::FirebaseWrapper___c__DisplayClass80_0::__cordl_internal_set_docId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___docId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::FirebaseWrapper___c__DisplayClass80_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass80_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::FirebaseWrapper___c__DisplayClass80_0::_AddSessionDownload_b__0(::StringW  id)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass80_0*>::get(),
                        "<AddSessionDownload>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, id);
}
inline void VROSC::FirebaseWrapper___c__DisplayClass80_0::_AddSessionDownload_b__1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass80_0*>::get(),
                        "<AddSessionDownload>b__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::FirebaseWrapper___c__DisplayClass80_0* VROSC::FirebaseWrapper___c__DisplayClass80_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::FirebaseWrapper___c__DisplayClass80_0*>());
}
// Ctor Parameters []
constexpr ::VROSC::FirebaseWrapper___c__DisplayClass80_0::FirebaseWrapper___c__DisplayClass80_0()   {
}
//  Writing Method size for method: ::VROSC::FirebaseWrapper___c__DisplayClass81_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper___c__DisplayClass81_0::*)()>(&::VROSC::FirebaseWrapper___c__DisplayClass81_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x183847c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass81_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FirebaseWrapper___c__DisplayClass81_0._AddSessionPreviewPlay_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper___c__DisplayClass81_0::*)(::StringW)>(&::VROSC::FirebaseWrapper___c__DisplayClass81_0::_AddSessionPreviewPlay_b__0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x183a4c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass81_0*>::get(),
                        "<AddSessionPreviewPlay>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FirebaseWrapper___c__DisplayClass81_0._AddSessionPreviewPlay_b__1
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper___c__DisplayClass81_0::*)()>(&::VROSC::FirebaseWrapper___c__DisplayClass81_0::_AddSessionPreviewPlay_b__1)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x183a4c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass81_0*>::get(),
                        "<AddSessionPreviewPlay>b__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::StringW>*& VROSC::FirebaseWrapper___c__DisplayClass81_0::__cordl_internal_get_onSuccess()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSuccess;
}
constexpr ::System::Action_1<::StringW>* const& VROSC::FirebaseWrapper___c__DisplayClass81_0::__cordl_internal_get_onSuccess() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSuccess;
}
constexpr void VROSC::FirebaseWrapper___c__DisplayClass81_0::__cordl_internal_set_onSuccess(::System::Action_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onSuccess)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& VROSC::FirebaseWrapper___c__DisplayClass81_0::__cordl_internal_get_docId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___docId;
}
constexpr ::StringW const& VROSC::FirebaseWrapper___c__DisplayClass81_0::__cordl_internal_get_docId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___docId;
}
constexpr void VROSC::FirebaseWrapper___c__DisplayClass81_0::__cordl_internal_set_docId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___docId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::FirebaseWrapper___c__DisplayClass81_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass81_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::FirebaseWrapper___c__DisplayClass81_0::_AddSessionPreviewPlay_b__0(::StringW  id)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass81_0*>::get(),
                        "<AddSessionPreviewPlay>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, id);
}
inline void VROSC::FirebaseWrapper___c__DisplayClass81_0::_AddSessionPreviewPlay_b__1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass81_0*>::get(),
                        "<AddSessionPreviewPlay>b__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::FirebaseWrapper___c__DisplayClass81_0* VROSC::FirebaseWrapper___c__DisplayClass81_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::FirebaseWrapper___c__DisplayClass81_0*>());
}
// Ctor Parameters []
constexpr ::VROSC::FirebaseWrapper___c__DisplayClass81_0::FirebaseWrapper___c__DisplayClass81_0()   {
}
//  Writing Method size for method: ::VROSC::FirebaseWrapper___c__DisplayClass82_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper___c__DisplayClass82_0::*)()>(&::VROSC::FirebaseWrapper___c__DisplayClass82_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1838484;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass82_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FirebaseWrapper___c__DisplayClass82_0._GetFirestoreCollectionData_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper___c__DisplayClass82_0::*)(::System::Threading::Tasks::Task_1<::Firebase::Firestore::QuerySnapshot*>*)>(&::VROSC::FirebaseWrapper___c__DisplayClass82_0::_GetFirestoreCollectionData_b__0)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x183a4e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass82_0*>::get(),
                        "<GetFirestoreCollectionData>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<::Firebase::Firestore::QuerySnapshot*>*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::VROSC::Error>*& VROSC::FirebaseWrapper___c__DisplayClass82_0::__cordl_internal_get_onFailure()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onFailure;
}
constexpr ::System::Action_1<::VROSC::Error>* const& VROSC::FirebaseWrapper___c__DisplayClass82_0::__cordl_internal_get_onFailure() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onFailure;
}
constexpr void VROSC::FirebaseWrapper___c__DisplayClass82_0::__cordl_internal_set_onFailure(::System::Action_1<::VROSC::Error>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onFailure)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::System::Collections::Generic::IEnumerable_1<::Firebase::Firestore::DocumentSnapshot*>*>*& VROSC::FirebaseWrapper___c__DisplayClass82_0::__cordl_internal_get_onSuccess()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSuccess;
}
constexpr ::System::Action_1<::System::Collections::Generic::IEnumerable_1<::Firebase::Firestore::DocumentSnapshot*>*>* const& VROSC::FirebaseWrapper___c__DisplayClass82_0::__cordl_internal_get_onSuccess() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSuccess;
}
constexpr void VROSC::FirebaseWrapper___c__DisplayClass82_0::__cordl_internal_set_onSuccess(::System::Action_1<::System::Collections::Generic::IEnumerable_1<::Firebase::Firestore::DocumentSnapshot*>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onSuccess)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::FirebaseWrapper___c__DisplayClass82_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass82_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::FirebaseWrapper___c__DisplayClass82_0::_GetFirestoreCollectionData_b__0(::System::Threading::Tasks::Task_1<::Firebase::Firestore::QuerySnapshot*>*  task)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass82_0*>::get(),
                        "<GetFirestoreCollectionData>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<::Firebase::Firestore::QuerySnapshot*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, task);
}
inline ::VROSC::FirebaseWrapper___c__DisplayClass82_0* VROSC::FirebaseWrapper___c__DisplayClass82_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::FirebaseWrapper___c__DisplayClass82_0*>());
}
// Ctor Parameters []
constexpr ::VROSC::FirebaseWrapper___c__DisplayClass82_0::FirebaseWrapper___c__DisplayClass82_0()   {
}
//  Writing Method size for method: ::VROSC::FirebaseWrapper___c__DisplayClass83_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper___c__DisplayClass83_0::*)()>(&::VROSC::FirebaseWrapper___c__DisplayClass83_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x183848c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass83_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FirebaseWrapper___c__DisplayClass83_0._GetFirestoreCollectionDataAsDictionary_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper___c__DisplayClass83_0::*)(::System::Threading::Tasks::Task_1<::Firebase::Firestore::QuerySnapshot*>*)>(&::VROSC::FirebaseWrapper___c__DisplayClass83_0::_GetFirestoreCollectionDataAsDictionary_b__0)> {
  constexpr static std::size_t size = 0x50c;
  constexpr static std::size_t addrs = 0x183a6d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass83_0*>::get(),
                        "<GetFirestoreCollectionDataAsDictionary>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<::Firebase::Firestore::QuerySnapshot*>*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::VROSC::Error>*& VROSC::FirebaseWrapper___c__DisplayClass83_0::__cordl_internal_get_onFailure()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onFailure;
}
constexpr ::System::Action_1<::VROSC::Error>* const& VROSC::FirebaseWrapper___c__DisplayClass83_0::__cordl_internal_get_onFailure() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onFailure;
}
constexpr void VROSC::FirebaseWrapper___c__DisplayClass83_0::__cordl_internal_set_onFailure(::System::Action_1<::VROSC::Error>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onFailure)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*& VROSC::FirebaseWrapper___c__DisplayClass83_0::__cordl_internal_get_result()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___result;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>* const& VROSC::FirebaseWrapper___c__DisplayClass83_0::__cordl_internal_get_result() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___result;
}
constexpr void VROSC::FirebaseWrapper___c__DisplayClass83_0::__cordl_internal_set_result(::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___result)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*>*& VROSC::FirebaseWrapper___c__DisplayClass83_0::__cordl_internal_get_onSuccess()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSuccess;
}
constexpr ::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*>* const& VROSC::FirebaseWrapper___c__DisplayClass83_0::__cordl_internal_get_onSuccess() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSuccess;
}
constexpr void VROSC::FirebaseWrapper___c__DisplayClass83_0::__cordl_internal_set_onSuccess(::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onSuccess)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::FirebaseWrapper___c__DisplayClass83_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass83_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::FirebaseWrapper___c__DisplayClass83_0::_GetFirestoreCollectionDataAsDictionary_b__0(::System::Threading::Tasks::Task_1<::Firebase::Firestore::QuerySnapshot*>*  task)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass83_0*>::get(),
                        "<GetFirestoreCollectionDataAsDictionary>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<::Firebase::Firestore::QuerySnapshot*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, task);
}
inline ::VROSC::FirebaseWrapper___c__DisplayClass83_0* VROSC::FirebaseWrapper___c__DisplayClass83_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::FirebaseWrapper___c__DisplayClass83_0*>());
}
// Ctor Parameters []
constexpr ::VROSC::FirebaseWrapper___c__DisplayClass83_0::FirebaseWrapper___c__DisplayClass83_0()   {
}
//  Writing Method size for method: ::VROSC::FirebaseWrapper___c__DisplayClass84_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper___c__DisplayClass84_0::*)()>(&::VROSC::FirebaseWrapper___c__DisplayClass84_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1838494;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass84_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FirebaseWrapper___c__DisplayClass84_0._GetFirestoreDocumentData_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper___c__DisplayClass84_0::*)(::System::Threading::Tasks::Task_1<::Firebase::Firestore::DocumentSnapshot*>*)>(&::VROSC::FirebaseWrapper___c__DisplayClass84_0::_GetFirestoreDocumentData_b__0)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x183abe4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass84_0*>::get(),
                        "<GetFirestoreDocumentData>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<::Firebase::Firestore::DocumentSnapshot*>*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::VROSC::Error>*& VROSC::FirebaseWrapper___c__DisplayClass84_0::__cordl_internal_get_onFailure()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onFailure;
}
constexpr ::System::Action_1<::VROSC::Error>* const& VROSC::FirebaseWrapper___c__DisplayClass84_0::__cordl_internal_get_onFailure() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onFailure;
}
constexpr void VROSC::FirebaseWrapper___c__DisplayClass84_0::__cordl_internal_set_onFailure(::System::Action_1<::VROSC::Error>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onFailure)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*& VROSC::FirebaseWrapper___c__DisplayClass84_0::__cordl_internal_get_onSuccess()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSuccess;
}
constexpr ::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>* const& VROSC::FirebaseWrapper___c__DisplayClass84_0::__cordl_internal_get_onSuccess() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSuccess;
}
constexpr void VROSC::FirebaseWrapper___c__DisplayClass84_0::__cordl_internal_set_onSuccess(::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onSuccess)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::FirebaseWrapper___c__DisplayClass84_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass84_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::FirebaseWrapper___c__DisplayClass84_0::_GetFirestoreDocumentData_b__0(::System::Threading::Tasks::Task_1<::Firebase::Firestore::DocumentSnapshot*>*  task)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass84_0*>::get(),
                        "<GetFirestoreDocumentData>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<::Firebase::Firestore::DocumentSnapshot*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, task);
}
inline ::VROSC::FirebaseWrapper___c__DisplayClass84_0* VROSC::FirebaseWrapper___c__DisplayClass84_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::FirebaseWrapper___c__DisplayClass84_0*>());
}
// Ctor Parameters []
constexpr ::VROSC::FirebaseWrapper___c__DisplayClass84_0::FirebaseWrapper___c__DisplayClass84_0()   {
}
//  Writing Method size for method: ::VROSC::FirebaseWrapper___c__DisplayClass85_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper___c__DisplayClass85_0::*)()>(&::VROSC::FirebaseWrapper___c__DisplayClass85_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x183849c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass85_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FirebaseWrapper___c__DisplayClass85_0._AddFirestoreDocument_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper___c__DisplayClass85_0::*)(::System::Threading::Tasks::Task_1<::Firebase::Firestore::DocumentReference*>*)>(&::VROSC::FirebaseWrapper___c__DisplayClass85_0::_AddFirestoreDocument_b__0)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x183ae14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass85_0*>::get(),
                        "<AddFirestoreDocument>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<::Firebase::Firestore::DocumentReference*>*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::VROSC::Error>*& VROSC::FirebaseWrapper___c__DisplayClass85_0::__cordl_internal_get_onFailure()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onFailure;
}
constexpr ::System::Action_1<::VROSC::Error>* const& VROSC::FirebaseWrapper___c__DisplayClass85_0::__cordl_internal_get_onFailure() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onFailure;
}
constexpr void VROSC::FirebaseWrapper___c__DisplayClass85_0::__cordl_internal_set_onFailure(::System::Action_1<::VROSC::Error>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onFailure)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::StringW>*& VROSC::FirebaseWrapper___c__DisplayClass85_0::__cordl_internal_get_onSuccess()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSuccess;
}
constexpr ::System::Action_1<::StringW>* const& VROSC::FirebaseWrapper___c__DisplayClass85_0::__cordl_internal_get_onSuccess() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSuccess;
}
constexpr void VROSC::FirebaseWrapper___c__DisplayClass85_0::__cordl_internal_set_onSuccess(::System::Action_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onSuccess)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::FirebaseWrapper___c__DisplayClass85_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass85_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::FirebaseWrapper___c__DisplayClass85_0::_AddFirestoreDocument_b__0(::System::Threading::Tasks::Task_1<::Firebase::Firestore::DocumentReference*>*  task)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass85_0*>::get(),
                        "<AddFirestoreDocument>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<::Firebase::Firestore::DocumentReference*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, task);
}
inline ::VROSC::FirebaseWrapper___c__DisplayClass85_0* VROSC::FirebaseWrapper___c__DisplayClass85_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::FirebaseWrapper___c__DisplayClass85_0*>());
}
// Ctor Parameters []
constexpr ::VROSC::FirebaseWrapper___c__DisplayClass85_0::FirebaseWrapper___c__DisplayClass85_0()   {
}
//  Writing Method size for method: ::VROSC::FirebaseWrapper___c__DisplayClass86_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper___c__DisplayClass86_0::*)()>(&::VROSC::FirebaseWrapper___c__DisplayClass86_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18384a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass86_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FirebaseWrapper___c__DisplayClass86_0._DeleteFirestoreDocument_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper___c__DisplayClass86_0::*)(::System::Threading::Tasks::Task*)>(&::VROSC::FirebaseWrapper___c__DisplayClass86_0::_DeleteFirestoreDocument_b__0)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x183b004;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass86_0*>::get(),
                        "<DeleteFirestoreDocument>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::VROSC::Error>*& VROSC::FirebaseWrapper___c__DisplayClass86_0::__cordl_internal_get_onFailure()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onFailure;
}
constexpr ::System::Action_1<::VROSC::Error>* const& VROSC::FirebaseWrapper___c__DisplayClass86_0::__cordl_internal_get_onFailure() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onFailure;
}
constexpr void VROSC::FirebaseWrapper___c__DisplayClass86_0::__cordl_internal_set_onFailure(::System::Action_1<::VROSC::Error>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onFailure)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& VROSC::FirebaseWrapper___c__DisplayClass86_0::__cordl_internal_get_onSuccess()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSuccess;
}
constexpr ::System::Action* const& VROSC::FirebaseWrapper___c__DisplayClass86_0::__cordl_internal_get_onSuccess() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSuccess;
}
constexpr void VROSC::FirebaseWrapper___c__DisplayClass86_0::__cordl_internal_set_onSuccess(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onSuccess)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::FirebaseWrapper___c__DisplayClass86_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass86_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::FirebaseWrapper___c__DisplayClass86_0::_DeleteFirestoreDocument_b__0(::System::Threading::Tasks::Task*  task)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass86_0*>::get(),
                        "<DeleteFirestoreDocument>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, task);
}
inline ::VROSC::FirebaseWrapper___c__DisplayClass86_0* VROSC::FirebaseWrapper___c__DisplayClass86_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::FirebaseWrapper___c__DisplayClass86_0*>());
}
// Ctor Parameters []
constexpr ::VROSC::FirebaseWrapper___c__DisplayClass86_0::FirebaseWrapper___c__DisplayClass86_0()   {
}
//  Writing Method size for method: ::VROSC::FirebaseWrapper___c__DisplayClass87_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper___c__DisplayClass87_0::*)()>(&::VROSC::FirebaseWrapper___c__DisplayClass87_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18384ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass87_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FirebaseWrapper___c__DisplayClass87_0._SaveFirestoreDocumentData_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper___c__DisplayClass87_0::*)(::System::Threading::Tasks::Task*)>(&::VROSC::FirebaseWrapper___c__DisplayClass87_0::_SaveFirestoreDocumentData_b__0)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x183b1bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass87_0*>::get(),
                        "<SaveFirestoreDocumentData>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::VROSC::Error>*& VROSC::FirebaseWrapper___c__DisplayClass87_0::__cordl_internal_get_onFailure()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onFailure;
}
constexpr ::System::Action_1<::VROSC::Error>* const& VROSC::FirebaseWrapper___c__DisplayClass87_0::__cordl_internal_get_onFailure() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onFailure;
}
constexpr void VROSC::FirebaseWrapper___c__DisplayClass87_0::__cordl_internal_set_onFailure(::System::Action_1<::VROSC::Error>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onFailure)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& VROSC::FirebaseWrapper___c__DisplayClass87_0::__cordl_internal_get_onSuccess()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSuccess;
}
constexpr ::System::Action* const& VROSC::FirebaseWrapper___c__DisplayClass87_0::__cordl_internal_get_onSuccess() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSuccess;
}
constexpr void VROSC::FirebaseWrapper___c__DisplayClass87_0::__cordl_internal_set_onSuccess(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onSuccess)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::FirebaseWrapper___c__DisplayClass87_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass87_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::FirebaseWrapper___c__DisplayClass87_0::_SaveFirestoreDocumentData_b__0(::System::Threading::Tasks::Task*  task)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass87_0*>::get(),
                        "<SaveFirestoreDocumentData>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, task);
}
inline ::VROSC::FirebaseWrapper___c__DisplayClass87_0* VROSC::FirebaseWrapper___c__DisplayClass87_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::FirebaseWrapper___c__DisplayClass87_0*>());
}
// Ctor Parameters []
constexpr ::VROSC::FirebaseWrapper___c__DisplayClass87_0::FirebaseWrapper___c__DisplayClass87_0()   {
}
//  Writing Method size for method: ::VROSC::FirebaseWrapper___c__DisplayClass88_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper___c__DisplayClass88_0::*)()>(&::VROSC::FirebaseWrapper___c__DisplayClass88_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18384b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass88_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FirebaseWrapper___c__DisplayClass88_0._IncrementValue_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper___c__DisplayClass88_0::*)(::System::Threading::Tasks::Task*)>(&::VROSC::FirebaseWrapper___c__DisplayClass88_0::_IncrementValue_b__0)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x183b374;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass88_0*>::get(),
                        "<IncrementValue>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::VROSC::Error>*& VROSC::FirebaseWrapper___c__DisplayClass88_0::__cordl_internal_get_onFailure()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onFailure;
}
constexpr ::System::Action_1<::VROSC::Error>* const& VROSC::FirebaseWrapper___c__DisplayClass88_0::__cordl_internal_get_onFailure() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onFailure;
}
constexpr void VROSC::FirebaseWrapper___c__DisplayClass88_0::__cordl_internal_set_onFailure(::System::Action_1<::VROSC::Error>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onFailure)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& VROSC::FirebaseWrapper___c__DisplayClass88_0::__cordl_internal_get_onSuccess()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSuccess;
}
constexpr ::System::Action* const& VROSC::FirebaseWrapper___c__DisplayClass88_0::__cordl_internal_get_onSuccess() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSuccess;
}
constexpr void VROSC::FirebaseWrapper___c__DisplayClass88_0::__cordl_internal_set_onSuccess(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onSuccess)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::FirebaseWrapper___c__DisplayClass88_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass88_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::FirebaseWrapper___c__DisplayClass88_0::_IncrementValue_b__0(::System::Threading::Tasks::Task*  task)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass88_0*>::get(),
                        "<IncrementValue>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, task);
}
inline ::VROSC::FirebaseWrapper___c__DisplayClass88_0* VROSC::FirebaseWrapper___c__DisplayClass88_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::FirebaseWrapper___c__DisplayClass88_0*>());
}
// Ctor Parameters []
constexpr ::VROSC::FirebaseWrapper___c__DisplayClass88_0::FirebaseWrapper___c__DisplayClass88_0()   {
}
//  Writing Method size for method: ::VROSC::FirebaseWrapper___c__DisplayClass89_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper___c__DisplayClass89_0::*)()>(&::VROSC::FirebaseWrapper___c__DisplayClass89_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1838700;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass89_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FirebaseWrapper___c__DisplayClass89_0._GetForceUpdates_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper___c__DisplayClass89_0::*)(::Proyecto26::ResponseHelper*)>(&::VROSC::FirebaseWrapper___c__DisplayClass89_0::_GetForceUpdates_b__0)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x183b52c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass89_0*>::get(),
                        "<GetForceUpdates>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Proyecto26::ResponseHelper*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FirebaseWrapper___c__DisplayClass89_0._GetForceUpdates_b__1
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper___c__DisplayClass89_0::*)(::System::Exception*)>(&::VROSC::FirebaseWrapper___c__DisplayClass89_0::_GetForceUpdates_b__1)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x183b614;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass89_0*>::get(),
                        "<GetForceUpdates>b__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& VROSC::FirebaseWrapper___c__DisplayClass89_0::__cordl_internal_get_responseJson()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___responseJson;
}
constexpr ::StringW const& VROSC::FirebaseWrapper___c__DisplayClass89_0::__cordl_internal_get_responseJson() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___responseJson;
}
constexpr void VROSC::FirebaseWrapper___c__DisplayClass89_0::__cordl_internal_set_responseJson(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___responseJson)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::StringW>*& VROSC::FirebaseWrapper___c__DisplayClass89_0::__cordl_internal_get_onSuccess()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSuccess;
}
constexpr ::System::Action_1<::StringW>* const& VROSC::FirebaseWrapper___c__DisplayClass89_0::__cordl_internal_get_onSuccess() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSuccess;
}
constexpr void VROSC::FirebaseWrapper___c__DisplayClass89_0::__cordl_internal_set_onSuccess(::System::Action_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onSuccess)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::VROSC::Error>*& VROSC::FirebaseWrapper___c__DisplayClass89_0::__cordl_internal_get_onFailure()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onFailure;
}
constexpr ::System::Action_1<::VROSC::Error>* const& VROSC::FirebaseWrapper___c__DisplayClass89_0::__cordl_internal_get_onFailure() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onFailure;
}
constexpr void VROSC::FirebaseWrapper___c__DisplayClass89_0::__cordl_internal_set_onFailure(::System::Action_1<::VROSC::Error>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onFailure)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::FirebaseWrapper___c__DisplayClass89_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass89_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::FirebaseWrapper___c__DisplayClass89_0::_GetForceUpdates_b__0(::Proyecto26::ResponseHelper*  response)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass89_0*>::get(),
                        "<GetForceUpdates>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Proyecto26::ResponseHelper*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, response);
}
inline void VROSC::FirebaseWrapper___c__DisplayClass89_0::_GetForceUpdates_b__1(::System::Exception*  exception)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass89_0*>::get(),
                        "<GetForceUpdates>b__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, exception);
}
inline ::VROSC::FirebaseWrapper___c__DisplayClass89_0* VROSC::FirebaseWrapper___c__DisplayClass89_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::FirebaseWrapper___c__DisplayClass89_0*>());
}
// Ctor Parameters []
constexpr ::VROSC::FirebaseWrapper___c__DisplayClass89_0::FirebaseWrapper___c__DisplayClass89_0()   {
}
//  Writing Method size for method: ::VROSC::FirebaseWrapper___c__DisplayClass90_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper___c__DisplayClass90_0::*)()>(&::VROSC::FirebaseWrapper___c__DisplayClass90_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1838708;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass90_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FirebaseWrapper___c__DisplayClass90_0._SaveSessionFile_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper___c__DisplayClass90_0::*)(::Firebase::Storage::UploadState*)>(&::VROSC::FirebaseWrapper___c__DisplayClass90_0::_SaveSessionFile_b__0)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x183b700;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass90_0*>::get(),
                        "<SaveSessionFile>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Storage::UploadState*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FirebaseWrapper___c__DisplayClass90_0._SaveSessionFile_b__1
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper___c__DisplayClass90_0::*)(::System::Threading::Tasks::Task_1<::Firebase::Storage::StorageMetadata*>*)>(&::VROSC::FirebaseWrapper___c__DisplayClass90_0::_SaveSessionFile_b__1)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x183b76c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass90_0*>::get(),
                        "<SaveSessionFile>b__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<::Firebase::Storage::StorageMetadata*>*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<float_t>*& VROSC::FirebaseWrapper___c__DisplayClass90_0::__cordl_internal_get_onProgress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onProgress;
}
constexpr ::System::Action_1<float_t>* const& VROSC::FirebaseWrapper___c__DisplayClass90_0::__cordl_internal_get_onProgress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onProgress;
}
constexpr void VROSC::FirebaseWrapper___c__DisplayClass90_0::__cordl_internal_set_onProgress(::System::Action_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onProgress)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::IO::FileStream*& VROSC::FirebaseWrapper___c__DisplayClass90_0::__cordl_internal_get_fs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fs;
}
constexpr ::System::IO::FileStream* const& VROSC::FirebaseWrapper___c__DisplayClass90_0::__cordl_internal_get_fs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fs;
}
constexpr void VROSC::FirebaseWrapper___c__DisplayClass90_0::__cordl_internal_set_fs(::System::IO::FileStream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___fs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::VROSC::Error>*& VROSC::FirebaseWrapper___c__DisplayClass90_0::__cordl_internal_get_onFailure()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onFailure;
}
constexpr ::System::Action_1<::VROSC::Error>* const& VROSC::FirebaseWrapper___c__DisplayClass90_0::__cordl_internal_get_onFailure() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onFailure;
}
constexpr void VROSC::FirebaseWrapper___c__DisplayClass90_0::__cordl_internal_set_onFailure(::System::Action_1<::VROSC::Error>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onFailure)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& VROSC::FirebaseWrapper___c__DisplayClass90_0::__cordl_internal_get_onSuccess()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSuccess;
}
constexpr ::System::Action* const& VROSC::FirebaseWrapper___c__DisplayClass90_0::__cordl_internal_get_onSuccess() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSuccess;
}
constexpr void VROSC::FirebaseWrapper___c__DisplayClass90_0::__cordl_internal_set_onSuccess(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onSuccess)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::FirebaseWrapper___c__DisplayClass90_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass90_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::FirebaseWrapper___c__DisplayClass90_0::_SaveSessionFile_b__0(::Firebase::Storage::UploadState*  state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass90_0*>::get(),
                        "<SaveSessionFile>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Storage::UploadState*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state);
}
inline void VROSC::FirebaseWrapper___c__DisplayClass90_0::_SaveSessionFile_b__1(::System::Threading::Tasks::Task_1<::Firebase::Storage::StorageMetadata*>*  task)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass90_0*>::get(),
                        "<SaveSessionFile>b__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<::Firebase::Storage::StorageMetadata*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, task);
}
inline ::VROSC::FirebaseWrapper___c__DisplayClass90_0* VROSC::FirebaseWrapper___c__DisplayClass90_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::FirebaseWrapper___c__DisplayClass90_0*>());
}
// Ctor Parameters []
constexpr ::VROSC::FirebaseWrapper___c__DisplayClass90_0::FirebaseWrapper___c__DisplayClass90_0()   {
}
//  Writing Method size for method: ::VROSC::FirebaseWrapper___c__DisplayClass91_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper___c__DisplayClass91_0::*)()>(&::VROSC::FirebaseWrapper___c__DisplayClass91_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1838870;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass91_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FirebaseWrapper___c__DisplayClass91_0._LoadSessionFile_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper___c__DisplayClass91_0::*)(::Firebase::Storage::DownloadState*)>(&::VROSC::FirebaseWrapper___c__DisplayClass91_0::_LoadSessionFile_b__0)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x183b8c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass91_0*>::get(),
                        "<LoadSessionFile>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Storage::DownloadState*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FirebaseWrapper___c__DisplayClass91_0._LoadSessionFile_b__1
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper___c__DisplayClass91_0::*)(::System::Threading::Tasks::Task*)>(&::VROSC::FirebaseWrapper___c__DisplayClass91_0::_LoadSessionFile_b__1)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x183b92c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass91_0*>::get(),
                        "<LoadSessionFile>b__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<float_t>*& VROSC::FirebaseWrapper___c__DisplayClass91_0::__cordl_internal_get_onProgress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onProgress;
}
constexpr ::System::Action_1<float_t>* const& VROSC::FirebaseWrapper___c__DisplayClass91_0::__cordl_internal_get_onProgress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onProgress;
}
constexpr void VROSC::FirebaseWrapper___c__DisplayClass91_0::__cordl_internal_set_onProgress(::System::Action_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onProgress)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::VROSC::Error>*& VROSC::FirebaseWrapper___c__DisplayClass91_0::__cordl_internal_get_onFailure()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onFailure;
}
constexpr ::System::Action_1<::VROSC::Error>* const& VROSC::FirebaseWrapper___c__DisplayClass91_0::__cordl_internal_get_onFailure() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onFailure;
}
constexpr void VROSC::FirebaseWrapper___c__DisplayClass91_0::__cordl_internal_set_onFailure(::System::Action_1<::VROSC::Error>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onFailure)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& VROSC::FirebaseWrapper___c__DisplayClass91_0::__cordl_internal_get_onSuccess()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSuccess;
}
constexpr ::System::Action* const& VROSC::FirebaseWrapper___c__DisplayClass91_0::__cordl_internal_get_onSuccess() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSuccess;
}
constexpr void VROSC::FirebaseWrapper___c__DisplayClass91_0::__cordl_internal_set_onSuccess(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onSuccess)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::FirebaseWrapper___c__DisplayClass91_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass91_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::FirebaseWrapper___c__DisplayClass91_0::_LoadSessionFile_b__0(::Firebase::Storage::DownloadState*  state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass91_0*>::get(),
                        "<LoadSessionFile>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Storage::DownloadState*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state);
}
inline void VROSC::FirebaseWrapper___c__DisplayClass91_0::_LoadSessionFile_b__1(::System::Threading::Tasks::Task*  task)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass91_0*>::get(),
                        "<LoadSessionFile>b__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, task);
}
inline ::VROSC::FirebaseWrapper___c__DisplayClass91_0* VROSC::FirebaseWrapper___c__DisplayClass91_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::FirebaseWrapper___c__DisplayClass91_0*>());
}
// Ctor Parameters []
constexpr ::VROSC::FirebaseWrapper___c__DisplayClass91_0::FirebaseWrapper___c__DisplayClass91_0()   {
}
//  Writing Method size for method: ::VROSC::FirebaseWrapper___c__DisplayClass92_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper___c__DisplayClass92_0::*)()>(&::VROSC::FirebaseWrapper___c__DisplayClass92_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1838878;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass92_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FirebaseWrapper___c__DisplayClass92_0._DeleteSessionFile_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper___c__DisplayClass92_0::*)(::System::Threading::Tasks::Task*)>(&::VROSC::FirebaseWrapper___c__DisplayClass92_0::_DeleteSessionFile_b__0)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x183bac0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass92_0*>::get(),
                        "<DeleteSessionFile>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action*& VROSC::FirebaseWrapper___c__DisplayClass92_0::__cordl_internal_get_onSuccess()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSuccess;
}
constexpr ::System::Action* const& VROSC::FirebaseWrapper___c__DisplayClass92_0::__cordl_internal_get_onSuccess() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSuccess;
}
constexpr void VROSC::FirebaseWrapper___c__DisplayClass92_0::__cordl_internal_set_onSuccess(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onSuccess)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::VROSC::Error>*& VROSC::FirebaseWrapper___c__DisplayClass92_0::__cordl_internal_get_onFailure()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onFailure;
}
constexpr ::System::Action_1<::VROSC::Error>* const& VROSC::FirebaseWrapper___c__DisplayClass92_0::__cordl_internal_get_onFailure() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onFailure;
}
constexpr void VROSC::FirebaseWrapper___c__DisplayClass92_0::__cordl_internal_set_onFailure(::System::Action_1<::VROSC::Error>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onFailure)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::FirebaseWrapper___c__DisplayClass92_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass92_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::FirebaseWrapper___c__DisplayClass92_0::_DeleteSessionFile_b__0(::System::Threading::Tasks::Task*  task)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass92_0*>::get(),
                        "<DeleteSessionFile>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, task);
}
inline ::VROSC::FirebaseWrapper___c__DisplayClass92_0* VROSC::FirebaseWrapper___c__DisplayClass92_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::FirebaseWrapper___c__DisplayClass92_0*>());
}
// Ctor Parameters []
constexpr ::VROSC::FirebaseWrapper___c__DisplayClass92_0::FirebaseWrapper___c__DisplayClass92_0()   {
}
//  Writing Method size for method: ::VROSC::FirebaseWrapper___c__DisplayClass93_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper___c__DisplayClass93_0::*)()>(&::VROSC::FirebaseWrapper___c__DisplayClass93_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1838880;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass93_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FirebaseWrapper___c__DisplayClass93_0._SavePreviewFile_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper___c__DisplayClass93_0::*)(::Firebase::Storage::UploadState*)>(&::VROSC::FirebaseWrapper___c__DisplayClass93_0::_SavePreviewFile_b__0)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x183bc34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass93_0*>::get(),
                        "<SavePreviewFile>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Storage::UploadState*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<float_t>*& VROSC::FirebaseWrapper___c__DisplayClass93_0::__cordl_internal_get_onProgress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onProgress;
}
constexpr ::System::Action_1<float_t>* const& VROSC::FirebaseWrapper___c__DisplayClass93_0::__cordl_internal_get_onProgress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onProgress;
}
constexpr void VROSC::FirebaseWrapper___c__DisplayClass93_0::__cordl_internal_set_onProgress(::System::Action_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onProgress)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::VROSC::Error>*& VROSC::FirebaseWrapper___c__DisplayClass93_0::__cordl_internal_get_onFailure()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onFailure;
}
constexpr ::System::Action_1<::VROSC::Error>* const& VROSC::FirebaseWrapper___c__DisplayClass93_0::__cordl_internal_get_onFailure() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onFailure;
}
constexpr void VROSC::FirebaseWrapper___c__DisplayClass93_0::__cordl_internal_set_onFailure(::System::Action_1<::VROSC::Error>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onFailure)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& VROSC::FirebaseWrapper___c__DisplayClass93_0::__cordl_internal_get_onSuccess()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSuccess;
}
constexpr ::System::Action* const& VROSC::FirebaseWrapper___c__DisplayClass93_0::__cordl_internal_get_onSuccess() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSuccess;
}
constexpr void VROSC::FirebaseWrapper___c__DisplayClass93_0::__cordl_internal_set_onSuccess(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onSuccess)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::FirebaseWrapper___c__DisplayClass93_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass93_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::FirebaseWrapper___c__DisplayClass93_0::_SavePreviewFile_b__0(::Firebase::Storage::UploadState*  state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass93_0*>::get(),
                        "<SavePreviewFile>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Storage::UploadState*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state);
}
inline ::VROSC::FirebaseWrapper___c__DisplayClass93_0* VROSC::FirebaseWrapper___c__DisplayClass93_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::FirebaseWrapper___c__DisplayClass93_0*>());
}
// Ctor Parameters []
constexpr ::VROSC::FirebaseWrapper___c__DisplayClass93_0::FirebaseWrapper___c__DisplayClass93_0()   {
}
//  Writing Method size for method: ::VROSC::FirebaseWrapper___c__DisplayClass93_1._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper___c__DisplayClass93_1::*)()>(&::VROSC::FirebaseWrapper___c__DisplayClass93_1::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1838cb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass93_1*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FirebaseWrapper___c__DisplayClass93_1._SavePreviewFile_b__1
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper___c__DisplayClass93_1::*)(::System::Threading::Tasks::Task_1<::Firebase::Storage::StorageMetadata*>*)>(&::VROSC::FirebaseWrapper___c__DisplayClass93_1::_SavePreviewFile_b__1)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x183bca0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass93_1*>::get(),
                        "<SavePreviewFile>b__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<::Firebase::Storage::StorageMetadata*>*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::IO::FileStream*& VROSC::FirebaseWrapper___c__DisplayClass93_1::__cordl_internal_get_fs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fs;
}
constexpr ::System::IO::FileStream* const& VROSC::FirebaseWrapper___c__DisplayClass93_1::__cordl_internal_get_fs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fs;
}
constexpr void VROSC::FirebaseWrapper___c__DisplayClass93_1::__cordl_internal_set_fs(::System::IO::FileStream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___fs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::FirebaseWrapper___c__DisplayClass93_0*& VROSC::FirebaseWrapper___c__DisplayClass93_1::__cordl_internal_get_CS$__8__locals1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CS$__8__locals1;
}
constexpr ::VROSC::FirebaseWrapper___c__DisplayClass93_0* const& VROSC::FirebaseWrapper___c__DisplayClass93_1::__cordl_internal_get_CS$__8__locals1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CS$__8__locals1;
}
constexpr void VROSC::FirebaseWrapper___c__DisplayClass93_1::__cordl_internal_set_CS$__8__locals1(::VROSC::FirebaseWrapper___c__DisplayClass93_0*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___CS$__8__locals1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::FirebaseWrapper___c__DisplayClass93_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass93_1*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::FirebaseWrapper___c__DisplayClass93_1::_SavePreviewFile_b__1(::System::Threading::Tasks::Task_1<::Firebase::Storage::StorageMetadata*>*  task)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass93_1*>::get(),
                        "<SavePreviewFile>b__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<::Firebase::Storage::StorageMetadata*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, task);
}
inline ::VROSC::FirebaseWrapper___c__DisplayClass93_1* VROSC::FirebaseWrapper___c__DisplayClass93_1::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::FirebaseWrapper___c__DisplayClass93_1*>());
}
// Ctor Parameters []
constexpr ::VROSC::FirebaseWrapper___c__DisplayClass93_1::FirebaseWrapper___c__DisplayClass93_1()   {
}
//  Writing Method size for method: ::VROSC::FirebaseWrapper___c__DisplayClass94_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper___c__DisplayClass94_0::*)()>(&::VROSC::FirebaseWrapper___c__DisplayClass94_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1838cb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass94_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FirebaseWrapper___c__DisplayClass94_0._LoadPreviewFile_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper___c__DisplayClass94_0::*)(::Firebase::Storage::DownloadState*)>(&::VROSC::FirebaseWrapper___c__DisplayClass94_0::_LoadPreviewFile_b__0)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x183be04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass94_0*>::get(),
                        "<LoadPreviewFile>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Storage::DownloadState*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FirebaseWrapper___c__DisplayClass94_0._LoadPreviewFile_b__1
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper___c__DisplayClass94_0::*)(::System::Threading::Tasks::Task*)>(&::VROSC::FirebaseWrapper___c__DisplayClass94_0::_LoadPreviewFile_b__1)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x183be70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass94_0*>::get(),
                        "<LoadPreviewFile>b__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<float_t>*& VROSC::FirebaseWrapper___c__DisplayClass94_0::__cordl_internal_get_onProgress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onProgress;
}
constexpr ::System::Action_1<float_t>* const& VROSC::FirebaseWrapper___c__DisplayClass94_0::__cordl_internal_get_onProgress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onProgress;
}
constexpr void VROSC::FirebaseWrapper___c__DisplayClass94_0::__cordl_internal_set_onProgress(::System::Action_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onProgress)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::VROSC::Error>*& VROSC::FirebaseWrapper___c__DisplayClass94_0::__cordl_internal_get_onFailure()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onFailure;
}
constexpr ::System::Action_1<::VROSC::Error>* const& VROSC::FirebaseWrapper___c__DisplayClass94_0::__cordl_internal_get_onFailure() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onFailure;
}
constexpr void VROSC::FirebaseWrapper___c__DisplayClass94_0::__cordl_internal_set_onFailure(::System::Action_1<::VROSC::Error>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onFailure)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::StringW>*& VROSC::FirebaseWrapper___c__DisplayClass94_0::__cordl_internal_get_onSuccess()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSuccess;
}
constexpr ::System::Action_1<::StringW>* const& VROSC::FirebaseWrapper___c__DisplayClass94_0::__cordl_internal_get_onSuccess() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSuccess;
}
constexpr void VROSC::FirebaseWrapper___c__DisplayClass94_0::__cordl_internal_set_onSuccess(::System::Action_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onSuccess)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& VROSC::FirebaseWrapper___c__DisplayClass94_0::__cordl_internal_get_destinationFilePath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___destinationFilePath;
}
constexpr ::StringW const& VROSC::FirebaseWrapper___c__DisplayClass94_0::__cordl_internal_get_destinationFilePath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___destinationFilePath;
}
constexpr void VROSC::FirebaseWrapper___c__DisplayClass94_0::__cordl_internal_set_destinationFilePath(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___destinationFilePath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::FirebaseWrapper___c__DisplayClass94_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass94_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::FirebaseWrapper___c__DisplayClass94_0::_LoadPreviewFile_b__0(::Firebase::Storage::DownloadState*  state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass94_0*>::get(),
                        "<LoadPreviewFile>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Storage::DownloadState*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state);
}
inline void VROSC::FirebaseWrapper___c__DisplayClass94_0::_LoadPreviewFile_b__1(::System::Threading::Tasks::Task*  task)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass94_0*>::get(),
                        "<LoadPreviewFile>b__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, task);
}
inline ::VROSC::FirebaseWrapper___c__DisplayClass94_0* VROSC::FirebaseWrapper___c__DisplayClass94_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::FirebaseWrapper___c__DisplayClass94_0*>());
}
// Ctor Parameters []
constexpr ::VROSC::FirebaseWrapper___c__DisplayClass94_0::FirebaseWrapper___c__DisplayClass94_0()   {
}
//  Writing Method size for method: ::VROSC::FirebaseWrapper___c__DisplayClass95_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper___c__DisplayClass95_0::*)()>(&::VROSC::FirebaseWrapper___c__DisplayClass95_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1838cc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass95_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FirebaseWrapper___c__DisplayClass95_0._DeletePreviewFile_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper___c__DisplayClass95_0::*)(::System::Threading::Tasks::Task*)>(&::VROSC::FirebaseWrapper___c__DisplayClass95_0::_DeletePreviewFile_b__0)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x183c008;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass95_0*>::get(),
                        "<DeletePreviewFile>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action*& VROSC::FirebaseWrapper___c__DisplayClass95_0::__cordl_internal_get_onSuccess()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSuccess;
}
constexpr ::System::Action* const& VROSC::FirebaseWrapper___c__DisplayClass95_0::__cordl_internal_get_onSuccess() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSuccess;
}
constexpr void VROSC::FirebaseWrapper___c__DisplayClass95_0::__cordl_internal_set_onSuccess(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onSuccess)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::VROSC::Error>*& VROSC::FirebaseWrapper___c__DisplayClass95_0::__cordl_internal_get_onFailure()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onFailure;
}
constexpr ::System::Action_1<::VROSC::Error>* const& VROSC::FirebaseWrapper___c__DisplayClass95_0::__cordl_internal_get_onFailure() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onFailure;
}
constexpr void VROSC::FirebaseWrapper___c__DisplayClass95_0::__cordl_internal_set_onFailure(::System::Action_1<::VROSC::Error>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onFailure)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::FirebaseWrapper___c__DisplayClass95_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass95_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::FirebaseWrapper___c__DisplayClass95_0::_DeletePreviewFile_b__0(::System::Threading::Tasks::Task*  task)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper___c__DisplayClass95_0*>::get(),
                        "<DeletePreviewFile>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, task);
}
inline ::VROSC::FirebaseWrapper___c__DisplayClass95_0* VROSC::FirebaseWrapper___c__DisplayClass95_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::FirebaseWrapper___c__DisplayClass95_0*>());
}
// Ctor Parameters []
constexpr ::VROSC::FirebaseWrapper___c__DisplayClass95_0::FirebaseWrapper___c__DisplayClass95_0()   {
}
//  Writing Method size for method: ::VROSC::FirebaseWrapper.get_IsUserVerified
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::FirebaseWrapper::*)()>(&::VROSC::FirebaseWrapper::get_IsUserVerified)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x18301f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "get_IsUserVerified",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FirebaseWrapper._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper::*)()>(&::VROSC::FirebaseWrapper::_ctor)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x1831768;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FirebaseWrapper.ReloadUser
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper::*)()>(&::VROSC::FirebaseWrapper::ReloadUser)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x183020c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "ReloadUser",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FirebaseWrapper.CreateUserWithEmail
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper::*)(::StringW, ::StringW, ::System::Action_1<::StringW>*, ::System::Action_1<::VROSC::Error>*)>(&::VROSC::FirebaseWrapper::CreateUserWithEmail)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x182f510;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "CreateUserWithEmail",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FirebaseWrapper.LoginUserWithEmail
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper::*)(::StringW, ::StringW, ::System::Action_2<::StringW,bool>*, ::System::Action_1<::VROSC::Error>*)>(&::VROSC::FirebaseWrapper::LoginUserWithEmail)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x182ddac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "LoginUserWithEmail",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW,bool>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FirebaseWrapper.LogoutUser
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper::*)()>(&::VROSC::FirebaseWrapper::LogoutUser)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x182d9d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "LogoutUser",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FirebaseWrapper.ChangeUserEmail
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper::*)(::StringW, ::System::Action_1<::StringW>*, ::System::Action_1<::VROSC::Error>*)>(&::VROSC::FirebaseWrapper::ChangeUserEmail)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x182daf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "ChangeUserEmail",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FirebaseWrapper.ChangeUserPassword
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper::*)(::StringW, ::System::Action_1<::StringW>*, ::System::Action_1<::VROSC::Error>*)>(&::VROSC::FirebaseWrapper::ChangeUserPassword)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x182edbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "ChangeUserPassword",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FirebaseWrapper.ResetPassword
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper::*)(::StringW, ::System::Action*, ::System::Action_1<::VROSC::Error>*)>(&::VROSC::FirebaseWrapper::ResetPassword)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x182e22c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "ResetPassword",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FirebaseWrapper.AuthStateChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper::*)(::System::Object*, ::System::EventArgs*)>(&::VROSC::FirebaseWrapper::AuthStateChanged)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x1834250;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "AuthStateChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventArgs*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FirebaseWrapper.SendVerificationEmail
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper::*)(::System::Action*, ::System::Action_1<::VROSC::Error>*)>(&::VROSC::FirebaseWrapper::SendVerificationEmail)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x182dfb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "SendVerificationEmail",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FirebaseWrapper.StartFirestoreBatchWrite
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::Error (::VROSC::FirebaseWrapper::*)()>(&::VROSC::FirebaseWrapper::StartFirestoreBatchWrite)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x183438c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "StartFirestoreBatchWrite",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FirebaseWrapper.CommitFirestoreBatchWrite
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper::*)(::System::Action*, ::System::Action_1<::VROSC::Error>*)>(&::VROSC::FirebaseWrapper::CommitFirestoreBatchWrite)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x1834434;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "CommitFirestoreBatchWrite",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FirebaseWrapper.GetUserSessions
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper::*)(::StringW, ::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*>*, ::System::Action_1<::VROSC::Error>*)>(&::VROSC::FirebaseWrapper::GetUserSessions)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x18345b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "GetUserSessions",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FirebaseWrapper.GetUserPreferences
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper::*)(::StringW, ::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*, ::System::Action_1<::VROSC::Error>*)>(&::VROSC::FirebaseWrapper::GetUserPreferences)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x18348c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "GetUserPreferences",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FirebaseWrapper.GetUserPreviewsPreferences
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper::*)(::StringW, ::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*, ::System::Action_1<::VROSC::Error>*)>(&::VROSC::FirebaseWrapper::GetUserPreviewsPreferences)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x1834b5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "GetUserPreviewsPreferences",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FirebaseWrapper.GetUserMalletsPreferences
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper::*)(::StringW, ::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*, ::System::Action_1<::VROSC::Error>*)>(&::VROSC::FirebaseWrapper::GetUserMalletsPreferences)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x1834d98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "GetUserMalletsPreferences",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FirebaseWrapper.GetUserProfile
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper::*)(::StringW, ::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*, ::System::Action_1<::VROSC::Error>*)>(&::VROSC::FirebaseWrapper::GetUserProfile)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1834ee0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "GetUserProfile",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FirebaseWrapper.GetUserFavorites
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper::*)(::StringW, ::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*>*, ::System::Action_1<::VROSC::Error>*)>(&::VROSC::FirebaseWrapper::GetUserFavorites)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x1834fe0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "GetUserFavorites",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FirebaseWrapper.GetUserUpVotes
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper::*)(::StringW, ::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*>*, ::System::Action_1<::VROSC::Error>*)>(&::VROSC::FirebaseWrapper::GetUserUpVotes)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x18351a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "GetUserUpVotes",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FirebaseWrapper.GetCommunitySessions
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper::*)(::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*>*, ::System::Action_1<::VROSC::Error>*)>(&::VROSC::FirebaseWrapper::GetCommunitySessions)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x18353b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "GetCommunitySessions",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FirebaseWrapper.GetNewUserSessionId
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::VROSC::FirebaseWrapper::*)(::StringW)>(&::VROSC::FirebaseWrapper::GetNewUserSessionId)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x18354f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "GetNewUserSessionId",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FirebaseWrapper.CreateUserSession
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper::*)(::StringW, ::StringW, ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*, ::System::Action*, ::System::Action_1<::VROSC::Error>*)>(&::VROSC::FirebaseWrapper::CreateUserSession)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x1835660;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "CreateUserSession",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FirebaseWrapper.RemoveUserSession
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper::*)(::StringW, ::StringW, ::System::Action*, ::System::Action_1<::VROSC::Error>*)>(&::VROSC::FirebaseWrapper::RemoveUserSession)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x183592c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "RemoveUserSession",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FirebaseWrapper.SaveUserProfile
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper::*)(::StringW, ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*, ::System::Action*, ::System::Action_1<::VROSC::Error>*)>(&::VROSC::FirebaseWrapper::SaveUserProfile)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x1835bc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "SaveUserProfile",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FirebaseWrapper.SaveUserGeneralPreferences
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper::*)(::StringW, ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*, ::System::Action*, ::System::Action_1<::VROSC::Error>*)>(&::VROSC::FirebaseWrapper::SaveUserGeneralPreferences)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x1835d58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "SaveUserGeneralPreferences",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FirebaseWrapper.SaveUserPreviewsPreferences
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper::*)(::StringW, ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*, ::System::Action*, ::System::Action_1<::VROSC::Error>*)>(&::VROSC::FirebaseWrapper::SaveUserPreviewsPreferences)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x1835eac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "SaveUserPreviewsPreferences",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FirebaseWrapper.SaveUserMalletsPreferences
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper::*)(::StringW, ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*, ::System::Action*, ::System::Action_1<::VROSC::Error>*)>(&::VROSC::FirebaseWrapper::SaveUserMalletsPreferences)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x1836000;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "SaveUserMalletsPreferences",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FirebaseWrapper.SaveUserSocialPreferences
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper::*)(::StringW, ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*, ::System::Action*, ::System::Action_1<::VROSC::Error>*)>(&::VROSC::FirebaseWrapper::SaveUserSocialPreferences)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x1836154;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "SaveUserSocialPreferences",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FirebaseWrapper.SaveUserKeyboardPreferences
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper::*)(::StringW, ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*, ::System::Action*, ::System::Action_1<::VROSC::Error>*)>(&::VROSC::FirebaseWrapper::SaveUserKeyboardPreferences)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x18362a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "SaveUserKeyboardPreferences",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FirebaseWrapper.SaveUserLoopStationPreferences
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper::*)(::StringW, ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*, ::System::Action*, ::System::Action_1<::VROSC::Error>*)>(&::VROSC::FirebaseWrapper::SaveUserLoopStationPreferences)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x18363fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "SaveUserLoopStationPreferences",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FirebaseWrapper.AddUserFavorite
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper::*)(::StringW, ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*, ::System::Action_1<::StringW>*, ::System::Action_1<::VROSC::Error>*)>(&::VROSC::FirebaseWrapper::AddUserFavorite)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1836550;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "AddUserFavorite",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FirebaseWrapper.AddUserUpVote
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper::*)(::StringW, ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*, ::System::Action_1<::StringW>*, ::System::Action_1<::VROSC::Error>*)>(&::VROSC::FirebaseWrapper::AddUserUpVote)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1836830;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "AddUserUpVote",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FirebaseWrapper.RemoveUserFavorite
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper::*)(::StringW, ::StringW, ::System::Action*, ::System::Action_1<::VROSC::Error>*)>(&::VROSC::FirebaseWrapper::RemoveUserFavorite)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x1836980;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "RemoveUserFavorite",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FirebaseWrapper.RemoveUserUpVote
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper::*)(::StringW, ::StringW, ::System::Action*, ::System::Action_1<::VROSC::Error>*)>(&::VROSC::FirebaseWrapper::RemoveUserUpVote)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x1836adc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "RemoveUserUpVote",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FirebaseWrapper.GetNewCommunitySessionId
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::VROSC::FirebaseWrapper::*)()>(&::VROSC::FirebaseWrapper::GetNewCommunitySessionId)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x1836c38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "GetNewCommunitySessionId",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FirebaseWrapper.CreateCommunitySession
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper::*)(::StringW, ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*, ::System::Action*, ::System::Action_1<::VROSC::Error>*)>(&::VROSC::FirebaseWrapper::CreateCommunitySession)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x1836d64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "CreateCommunitySession",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FirebaseWrapper.RemoveCommunitySession
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper::*)(::StringW, ::System::Action*, ::System::Action_1<::VROSC::Error>*)>(&::VROSC::FirebaseWrapper::RemoveCommunitySession)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x1836e90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "RemoveCommunitySession",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FirebaseWrapper.AddSessionUpVote
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper::*)(::StringW, ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*, ::System::Action_1<::StringW>*, ::System::Action_1<::VROSC::Error>*)>(&::VROSC::FirebaseWrapper::AddSessionUpVote)> {
  constexpr static std::size_t size = 0x368;
  constexpr static std::size_t addrs = 0x1836fb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "AddSessionUpVote",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FirebaseWrapper.RemoveSessionUpVote
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper::*)(::StringW, ::StringW, ::System::Action*, ::System::Action_1<::VROSC::Error>*)>(&::VROSC::FirebaseWrapper::RemoveSessionUpVote)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x1837514;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "RemoveSessionUpVote",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FirebaseWrapper.AddSessionFavorite
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper::*)(::StringW, ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*, ::System::Action_1<::StringW>*, ::System::Action_1<::VROSC::Error>*)>(&::VROSC::FirebaseWrapper::AddSessionFavorite)> {
  constexpr static std::size_t size = 0x368;
  constexpr static std::size_t addrs = 0x18377a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "AddSessionFavorite",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FirebaseWrapper.RemoveSessionFavorite
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper::*)(::StringW, ::StringW, ::System::Action*, ::System::Action_1<::VROSC::Error>*)>(&::VROSC::FirebaseWrapper::RemoveSessionFavorite)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x1837b14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "RemoveSessionFavorite",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FirebaseWrapper.AddSessionDownload
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper::*)(::StringW, ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*, ::System::Action_1<::StringW>*, ::System::Action_1<::VROSC::Error>*)>(&::VROSC::FirebaseWrapper::AddSessionDownload)> {
  constexpr static std::size_t size = 0x368;
  constexpr static std::size_t addrs = 0x1837da4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "AddSessionDownload",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FirebaseWrapper.AddSessionPreviewPlay
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper::*)(::StringW, ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*, ::System::Action_1<::StringW>*, ::System::Action_1<::VROSC::Error>*)>(&::VROSC::FirebaseWrapper::AddSessionPreviewPlay)> {
  constexpr static std::size_t size = 0x368;
  constexpr static std::size_t addrs = 0x1838114;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "AddSessionPreviewPlay",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FirebaseWrapper.GetFirestoreCollectionData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper::*)(::Firebase::Firestore::CollectionReference*, ::System::Action_1<::System::Collections::Generic::IEnumerable_1<::Firebase::Firestore::DocumentSnapshot*>*>*, ::System::Action_1<::VROSC::Error>*)>(&::VROSC::FirebaseWrapper::GetFirestoreCollectionData)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x1834a68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "GetFirestoreCollectionData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::CollectionReference*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Collections::Generic::IEnumerable_1<::Firebase::Firestore::DocumentSnapshot*>*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FirebaseWrapper.GetFirestoreCollectionDataAsDictionary
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper::*)(::Firebase::Firestore::CollectionReference*, ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*, ::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*>*, ::System::Action_1<::VROSC::Error>*)>(&::VROSC::FirebaseWrapper::GetFirestoreCollectionDataAsDictionary)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x18347bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "GetFirestoreCollectionDataAsDictionary",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::CollectionReference*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FirebaseWrapper.GetFirestoreDocumentData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper::*)(::Firebase::Firestore::DocumentReference*, ::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*, ::System::Action_1<::VROSC::Error>*)>(&::VROSC::FirebaseWrapper::GetFirestoreDocumentData)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x1834ca4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "GetFirestoreDocumentData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::DocumentReference*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FirebaseWrapper.AddFirestoreDocument
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper::*)(::Firebase::Firestore::CollectionReference*, ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*, ::System::Action_1<::StringW>*, ::System::Action_1<::VROSC::Error>*)>(&::VROSC::FirebaseWrapper::AddFirestoreDocument)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x18366a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "AddFirestoreDocument",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::CollectionReference*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FirebaseWrapper.DeleteFirestoreDocument
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper::*)(::Firebase::Firestore::DocumentReference*, ::System::Action*, ::System::Action_1<::VROSC::Error>*)>(&::VROSC::FirebaseWrapper::DeleteFirestoreDocument)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x1835a88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "DeleteFirestoreDocument",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::DocumentReference*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FirebaseWrapper.SaveFirestoreDocumentData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper::*)(::Firebase::Firestore::DocumentReference*, ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*, ::System::Action*, ::System::Action_1<::VROSC::Error>*)>(&::VROSC::FirebaseWrapper::SaveFirestoreDocumentData)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x18357d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "SaveFirestoreDocumentData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::DocumentReference*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FirebaseWrapper.IncrementValue
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper::*)(::Firebase::Firestore::DocumentReference*, ::StringW, int32_t, ::System::Action*, ::System::Action_1<::VROSC::Error>*)>(&::VROSC::FirebaseWrapper::IncrementValue)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x1837324;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "IncrementValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::DocumentReference*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FirebaseWrapper.GetForceUpdates
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper::*)(::System::Action_1<::StringW>*, ::System::Action_1<::VROSC::Error>*)>(&::VROSC::FirebaseWrapper::GetForceUpdates)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x18384bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "GetForceUpdates",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FirebaseWrapper.SaveSessionFile
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper::*)(::StringW, ::StringW, bool, ::System::Action*, ::System::Action_1<float_t>*, ::System::Action_1<::VROSC::Error>*)>(&::VROSC::FirebaseWrapper::SaveSessionFile)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x1833f98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "SaveSessionFile",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<float_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FirebaseWrapper.LoadSessionFile
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper::*)(::StringW, ::StringW, bool, ::System::Action*, ::System::Action_1<float_t>*, ::System::Action_1<::VROSC::Error>*)>(&::VROSC::FirebaseWrapper::LoadSessionFile)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x18339c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "LoadSessionFile",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<float_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FirebaseWrapper.DeleteSessionFile
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper::*)(::StringW, ::StringW, bool, ::System::Action*, ::System::Action_1<::VROSC::Error>*)>(&::VROSC::FirebaseWrapper::DeleteSessionFile)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x18335a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "DeleteSessionFile",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FirebaseWrapper.SavePreviewFile
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper::*)(::StringW, ::StringW, bool, ::System::Action*, ::System::Action_1<float_t>*, ::System::Action_1<::VROSC::Error>*)>(&::VROSC::FirebaseWrapper::SavePreviewFile)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x18327a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "SavePreviewFile",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<float_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FirebaseWrapper.LoadPreviewFile
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper::*)(::StringW, ::StringW, bool, bool, ::System::Action_1<::StringW>*, ::System::Action_1<float_t>*, ::System::Action_1<::VROSC::Error>*)>(&::VROSC::FirebaseWrapper::LoadPreviewFile)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x1832094;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "LoadPreviewFile",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 7>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<float_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FirebaseWrapper.DeletePreviewFile
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper::*)(::StringW, ::StringW, bool, bool, ::System::Action*, ::System::Action_1<::VROSC::Error>*)>(&::VROSC::FirebaseWrapper::DeletePreviewFile)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1833034;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "DeletePreviewFile",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FirebaseWrapper.LogError
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FirebaseWrapper::*)(::StringW, ::StringW, ::StringW, ::StringW, ::StringW, ::StringW)>(&::VROSC::FirebaseWrapper::LogError)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x1838cc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "LogError",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FirebaseWrapper.GenerateSessionFilePath
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::VROSC::FirebaseWrapper::*)(::StringW, ::StringW, bool)>(&::VROSC::FirebaseWrapper::GenerateSessionFilePath)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1838710;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "GenerateSessionFilePath",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FirebaseWrapper.GeneratePreviewFilePath
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::VROSC::FirebaseWrapper::*)(::StringW, ::StringW, bool, bool)>(&::VROSC::FirebaseWrapper::GeneratePreviewFilePath)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x1838888;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "GeneratePreviewFilePath",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FirebaseWrapper.GetZipFilePath
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::VROSC::FirebaseWrapper::*)(::StringW)>(&::VROSC::FirebaseWrapper::GetZipFilePath)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18387c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "GetZipFilePath",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FirebaseWrapper.GetLocalPreviewFilePath
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::VROSC::FirebaseWrapper::*)(::StringW, bool)>(&::VROSC::FirebaseWrapper::GetLocalPreviewFilePath)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x1838b64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "GetLocalPreviewFilePath",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::Firebase::Auth::FirebaseAuth*& VROSC::FirebaseWrapper::__cordl_internal_get__fbAuth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fbAuth;
}
constexpr ::Firebase::Auth::FirebaseAuth* const& VROSC::FirebaseWrapper::__cordl_internal_get__fbAuth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fbAuth;
}
constexpr void VROSC::FirebaseWrapper::__cordl_internal_set__fbAuth(::Firebase::Auth::FirebaseAuth*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____fbAuth)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Firebase::Auth::FirebaseUser*& VROSC::FirebaseWrapper::__cordl_internal_get__fbUser()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fbUser;
}
constexpr ::Firebase::Auth::FirebaseUser* const& VROSC::FirebaseWrapper::__cordl_internal_get__fbUser() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fbUser;
}
constexpr void VROSC::FirebaseWrapper::__cordl_internal_set__fbUser(::Firebase::Auth::FirebaseUser*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____fbUser)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Firebase::Firestore::FirebaseFirestore*& VROSC::FirebaseWrapper::__cordl_internal_get__fbFirestore()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fbFirestore;
}
constexpr ::Firebase::Firestore::FirebaseFirestore* const& VROSC::FirebaseWrapper::__cordl_internal_get__fbFirestore() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fbFirestore;
}
constexpr void VROSC::FirebaseWrapper::__cordl_internal_set__fbFirestore(::Firebase::Firestore::FirebaseFirestore*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____fbFirestore)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Firebase::Storage::StorageReference*& VROSC::FirebaseWrapper::__cordl_internal_get__fbStorage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fbStorage;
}
constexpr ::Firebase::Storage::StorageReference* const& VROSC::FirebaseWrapper::__cordl_internal_get__fbStorage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fbStorage;
}
constexpr void VROSC::FirebaseWrapper::__cordl_internal_set__fbStorage(::Firebase::Storage::StorageReference*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____fbStorage)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Firebase::Firestore::WriteBatch*& VROSC::FirebaseWrapper::__cordl_internal_get__firestoreWriteBatch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____firestoreWriteBatch;
}
constexpr ::Firebase::Firestore::WriteBatch* const& VROSC::FirebaseWrapper::__cordl_internal_get__firestoreWriteBatch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____firestoreWriteBatch;
}
constexpr void VROSC::FirebaseWrapper::__cordl_internal_set__firestoreWriteBatch(::Firebase::Firestore::WriteBatch*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____firestoreWriteBatch)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::FirebaseWrapper::setStaticF_OnUserLogout(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "OnUserLogout", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get>(std::forward<::System::Action*>(value));
}
inline ::System::Action* VROSC::FirebaseWrapper::getStaticF_OnUserLogout()  {
return ::cordl_internals::getStaticField<::System::Action*, "OnUserLogout", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get>();
}
inline bool VROSC::FirebaseWrapper::get_IsUserVerified()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "get_IsUserVerified",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void VROSC::FirebaseWrapper::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::FirebaseWrapper::ReloadUser()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "ReloadUser",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::FirebaseWrapper::CreateUserWithEmail(::StringW  email, ::StringW  password, ::System::Action_1<::StringW>*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "CreateUserWithEmail",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, email, password, onSuccess, onFailure);
}
inline void VROSC::FirebaseWrapper::LoginUserWithEmail(::StringW  email, ::StringW  password, ::System::Action_2<::StringW,bool>*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "LoginUserWithEmail",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW,bool>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, email, password, onSuccess, onFailure);
}
inline void VROSC::FirebaseWrapper::LogoutUser()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "LogoutUser",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::FirebaseWrapper::ChangeUserEmail(::StringW  email, ::System::Action_1<::StringW>*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "ChangeUserEmail",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, email, onSuccess, onFailure);
}
inline void VROSC::FirebaseWrapper::ChangeUserPassword(::StringW  password, ::System::Action_1<::StringW>*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "ChangeUserPassword",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, password, onSuccess, onFailure);
}
inline void VROSC::FirebaseWrapper::ResetPassword(::StringW  email, ::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "ResetPassword",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, email, onSuccess, onFailure);
}
inline void VROSC::FirebaseWrapper::AuthStateChanged(::System::Object*  sender, ::System::EventArgs*  eventArgs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "AuthStateChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventArgs*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sender, eventArgs);
}
inline void VROSC::FirebaseWrapper::SendVerificationEmail(::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "SendVerificationEmail",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, onSuccess, onFailure);
}
inline ::VROSC::Error VROSC::FirebaseWrapper::StartFirestoreBatchWrite()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "StartFirestoreBatchWrite",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::Error, false>(this, ___internal_method);
}
inline void VROSC::FirebaseWrapper::CommitFirestoreBatchWrite(::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "CommitFirestoreBatchWrite",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, onSuccess, onFailure);
}
inline void VROSC::FirebaseWrapper::GetUserSessions(::StringW  userId, ::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*>*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "GetUserSessions",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId, onSuccess, onFailure);
}
inline void VROSC::FirebaseWrapper::GetUserPreferences(::StringW  userId, ::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "GetUserPreferences",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId, onSuccess, onFailure);
}
inline void VROSC::FirebaseWrapper::GetUserPreviewsPreferences(::StringW  userId, ::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "GetUserPreviewsPreferences",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId, onSuccess, onFailure);
}
inline void VROSC::FirebaseWrapper::GetUserMalletsPreferences(::StringW  userId, ::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "GetUserMalletsPreferences",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId, onSuccess, onFailure);
}
inline void VROSC::FirebaseWrapper::GetUserProfile(::StringW  userId, ::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "GetUserProfile",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId, onSuccess, onFailure);
}
inline void VROSC::FirebaseWrapper::GetUserFavorites(::StringW  userId, ::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*>*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "GetUserFavorites",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId, onSuccess, onFailure);
}
inline void VROSC::FirebaseWrapper::GetUserUpVotes(::StringW  userId, ::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*>*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "GetUserUpVotes",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId, onSuccess, onFailure);
}
inline void VROSC::FirebaseWrapper::GetCommunitySessions(::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*>*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "GetCommunitySessions",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, onSuccess, onFailure);
}
inline ::StringW VROSC::FirebaseWrapper::GetNewUserSessionId(::StringW  userId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "GetNewUserSessionId",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, userId);
}
inline void VROSC::FirebaseWrapper::CreateUserSession(::StringW  userId, ::StringW  sessionId, ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  data, ::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "CreateUserSession",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId, sessionId, data, onSuccess, onFailure);
}
inline void VROSC::FirebaseWrapper::RemoveUserSession(::StringW  userId, ::StringW  sessionId, ::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "RemoveUserSession",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId, sessionId, onSuccess, onFailure);
}
inline void VROSC::FirebaseWrapper::SaveUserProfile(::StringW  userId, ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  data, ::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "SaveUserProfile",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId, data, onSuccess, onFailure);
}
inline void VROSC::FirebaseWrapper::SaveUserGeneralPreferences(::StringW  userId, ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  data, ::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "SaveUserGeneralPreferences",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId, data, onSuccess, onFailure);
}
inline void VROSC::FirebaseWrapper::SaveUserPreviewsPreferences(::StringW  userId, ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  data, ::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "SaveUserPreviewsPreferences",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId, data, onSuccess, onFailure);
}
inline void VROSC::FirebaseWrapper::SaveUserMalletsPreferences(::StringW  userId, ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  data, ::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "SaveUserMalletsPreferences",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId, data, onSuccess, onFailure);
}
inline void VROSC::FirebaseWrapper::SaveUserSocialPreferences(::StringW  userId, ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  data, ::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "SaveUserSocialPreferences",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId, data, onSuccess, onFailure);
}
inline void VROSC::FirebaseWrapper::SaveUserKeyboardPreferences(::StringW  userId, ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  data, ::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "SaveUserKeyboardPreferences",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId, data, onSuccess, onFailure);
}
inline void VROSC::FirebaseWrapper::SaveUserLoopStationPreferences(::StringW  userId, ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  data, ::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "SaveUserLoopStationPreferences",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId, data, onSuccess, onFailure);
}
inline void VROSC::FirebaseWrapper::AddUserFavorite(::StringW  userId, ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  data, ::System::Action_1<::StringW>*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "AddUserFavorite",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId, data, onSuccess, onFailure);
}
inline void VROSC::FirebaseWrapper::AddUserUpVote(::StringW  userId, ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  data, ::System::Action_1<::StringW>*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "AddUserUpVote",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId, data, onSuccess, onFailure);
}
inline void VROSC::FirebaseWrapper::RemoveUserFavorite(::StringW  userId, ::StringW  favoriteId, ::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "RemoveUserFavorite",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId, favoriteId, onSuccess, onFailure);
}
inline void VROSC::FirebaseWrapper::RemoveUserUpVote(::StringW  userId, ::StringW  upVoteId, ::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "RemoveUserUpVote",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId, upVoteId, onSuccess, onFailure);
}
inline ::StringW VROSC::FirebaseWrapper::GetNewCommunitySessionId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "GetNewCommunitySessionId",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void VROSC::FirebaseWrapper::CreateCommunitySession(::StringW  sessionId, ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  data, ::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "CreateCommunitySession",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sessionId, data, onSuccess, onFailure);
}
inline void VROSC::FirebaseWrapper::RemoveCommunitySession(::StringW  sessionId, ::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "RemoveCommunitySession",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sessionId, onSuccess, onFailure);
}
inline void VROSC::FirebaseWrapper::AddSessionUpVote(::StringW  sessionId, ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  data, ::System::Action_1<::StringW>*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "AddSessionUpVote",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sessionId, data, onSuccess, onFailure);
}
inline void VROSC::FirebaseWrapper::RemoveSessionUpVote(::StringW  sessionId, ::StringW  upVoteId, ::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "RemoveSessionUpVote",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sessionId, upVoteId, onSuccess, onFailure);
}
inline void VROSC::FirebaseWrapper::AddSessionFavorite(::StringW  sessionId, ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  data, ::System::Action_1<::StringW>*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "AddSessionFavorite",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sessionId, data, onSuccess, onFailure);
}
inline void VROSC::FirebaseWrapper::RemoveSessionFavorite(::StringW  sessionId, ::StringW  upVoteId, ::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "RemoveSessionFavorite",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sessionId, upVoteId, onSuccess, onFailure);
}
inline void VROSC::FirebaseWrapper::AddSessionDownload(::StringW  sessionId, ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  data, ::System::Action_1<::StringW>*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "AddSessionDownload",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sessionId, data, onSuccess, onFailure);
}
inline void VROSC::FirebaseWrapper::AddSessionPreviewPlay(::StringW  sessionId, ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  data, ::System::Action_1<::StringW>*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "AddSessionPreviewPlay",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sessionId, data, onSuccess, onFailure);
}
inline void VROSC::FirebaseWrapper::GetFirestoreCollectionData(::Firebase::Firestore::CollectionReference*  colRef, ::System::Action_1<::System::Collections::Generic::IEnumerable_1<::Firebase::Firestore::DocumentSnapshot*>*>*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "GetFirestoreCollectionData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::CollectionReference*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Collections::Generic::IEnumerable_1<::Firebase::Firestore::DocumentSnapshot*>*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, colRef, onSuccess, onFailure);
}
inline void VROSC::FirebaseWrapper::GetFirestoreCollectionDataAsDictionary(::Firebase::Firestore::CollectionReference*  colRef, ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*  result, ::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*>*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "GetFirestoreCollectionDataAsDictionary",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::CollectionReference*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, colRef, result, onSuccess, onFailure);
}
inline void VROSC::FirebaseWrapper::GetFirestoreDocumentData(::Firebase::Firestore::DocumentReference*  docRef, ::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "GetFirestoreDocumentData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::DocumentReference*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, docRef, onSuccess, onFailure);
}
inline void VROSC::FirebaseWrapper::AddFirestoreDocument(::Firebase::Firestore::CollectionReference*  colRef, ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  data, ::System::Action_1<::StringW>*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "AddFirestoreDocument",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::CollectionReference*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, colRef, data, onSuccess, onFailure);
}
inline void VROSC::FirebaseWrapper::DeleteFirestoreDocument(::Firebase::Firestore::DocumentReference*  docRef, ::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "DeleteFirestoreDocument",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::DocumentReference*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, docRef, onSuccess, onFailure);
}
inline void VROSC::FirebaseWrapper::SaveFirestoreDocumentData(::Firebase::Firestore::DocumentReference*  docRef, ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  data, ::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "SaveFirestoreDocumentData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::DocumentReference*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, docRef, data, onSuccess, onFailure);
}
inline void VROSC::FirebaseWrapper::IncrementValue(::Firebase::Firestore::DocumentReference*  docRef, ::StringW  fieldName, int32_t  value, ::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "IncrementValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::DocumentReference*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, docRef, fieldName, value, onSuccess, onFailure);
}
inline void VROSC::FirebaseWrapper::GetForceUpdates(::System::Action_1<::StringW>*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "GetForceUpdates",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, onSuccess, onFailure);
}
inline void VROSC::FirebaseWrapper::SaveSessionFile(::StringW  userId, ::StringW  sessionName, bool  isCommunity, ::System::Action*  onSuccess, ::System::Action_1<float_t>*  onProgress, ::System::Action_1<::VROSC::Error>*  onFailure)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "SaveSessionFile",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<float_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId, sessionName, isCommunity, onSuccess, onProgress, onFailure);
}
inline void VROSC::FirebaseWrapper::LoadSessionFile(::StringW  userId, ::StringW  sessionName, bool  isCommunity, ::System::Action*  onSuccess, ::System::Action_1<float_t>*  onProgress, ::System::Action_1<::VROSC::Error>*  onFailure)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "LoadSessionFile",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<float_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId, sessionName, isCommunity, onSuccess, onProgress, onFailure);
}
inline void VROSC::FirebaseWrapper::DeleteSessionFile(::StringW  userId, ::StringW  sessionName, bool  isCommunity, ::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "DeleteSessionFile",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId, sessionName, isCommunity, onSuccess, onFailure);
}
inline void VROSC::FirebaseWrapper::SavePreviewFile(::StringW  userId, ::StringW  sessionName, bool  isCommunity, ::System::Action*  onSuccess, ::System::Action_1<float_t>*  onProgress, ::System::Action_1<::VROSC::Error>*  onFailure)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "SavePreviewFile",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<float_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId, sessionName, isCommunity, onSuccess, onProgress, onFailure);
}
inline void VROSC::FirebaseWrapper::LoadPreviewFile(::StringW  userId, ::StringW  sessionName, bool  isCommunity, bool  isOgg, ::System::Action_1<::StringW>*  onSuccess, ::System::Action_1<float_t>*  onProgress, ::System::Action_1<::VROSC::Error>*  onFailure)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "LoadPreviewFile",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 7>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<float_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId, sessionName, isCommunity, isOgg, onSuccess, onProgress, onFailure);
}
inline void VROSC::FirebaseWrapper::DeletePreviewFile(::StringW  userId, ::StringW  sessionName, bool  isCommunity, bool  isOgg, ::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "DeletePreviewFile",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId, sessionName, isCommunity, isOgg, onSuccess, onFailure);
}
inline void VROSC::FirebaseWrapper::LogError(::StringW  version, ::StringW  date, ::StringW  device, ::StringW  operatingSystem, ::StringW  message, ::StringW  stack)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "LogError",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, version, date, device, operatingSystem, message, stack);
}
inline ::StringW VROSC::FirebaseWrapper::GenerateSessionFilePath(::StringW  userId, ::StringW  sessionName, bool  isCommunity)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "GenerateSessionFilePath",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, userId, sessionName, isCommunity);
}
inline ::StringW VROSC::FirebaseWrapper::GeneratePreviewFilePath(::StringW  userId, ::StringW  sessionName, bool  isCommunity, bool  isOgg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "GeneratePreviewFilePath",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, userId, sessionName, isCommunity, isOgg);
}
inline ::StringW VROSC::FirebaseWrapper::GetZipFilePath(::StringW  sessionName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "GetZipFilePath",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, sessionName);
}
inline ::StringW VROSC::FirebaseWrapper::GetLocalPreviewFilePath(::StringW  sessionName, bool  useOgg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FirebaseWrapper*>::get(),
                        "GetLocalPreviewFilePath",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, sessionName, useOgg);
}
inline ::VROSC::FirebaseWrapper* VROSC::FirebaseWrapper::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::FirebaseWrapper*>());
}
// Ctor Parameters []
constexpr ::VROSC::FirebaseWrapper::FirebaseWrapper()   {
}
