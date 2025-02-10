#pragma once
// IWYU pragma private; include "VROSC/UserUpVotesDataController.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VROSC/zzzz__BaseDataController_impl.hpp"
#include "VROSC/zzzz__UserUpVotesDataController_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "VROSC/zzzz__Error_def.hpp"
#include "VROSC/zzzz__UserUpVotesDataController_def.hpp"
#include "VROSC/zzzz__UserUpVotesDataModel_def.hpp"
//  Writing Method size for method: ::VROSC::UserUpVotesDataController___c__DisplayClass10_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UserUpVotesDataController___c__DisplayClass10_0::*)()>(&::VROSC::UserUpVotesDataController___c__DisplayClass10_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x187dc58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserUpVotesDataController___c__DisplayClass10_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UserUpVotesDataController___c__DisplayClass10_0._AddUpVoteToData_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UserUpVotesDataController___c__DisplayClass10_0::*)(::StringW)>(&::VROSC::UserUpVotesDataController___c__DisplayClass10_0::_AddUpVoteToData_b__0)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x187dc68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserUpVotesDataController___c__DisplayClass10_0*>::get(),
                        "<AddUpVoteToData>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::VROSC::UserUpVotesDataModel_UpVote*& VROSC::UserUpVotesDataController___c__DisplayClass10_0::__cordl_internal_get_upVote()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upVote;
}
constexpr ::VROSC::UserUpVotesDataModel_UpVote* const& VROSC::UserUpVotesDataController___c__DisplayClass10_0::__cordl_internal_get_upVote() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upVote;
}
constexpr void VROSC::UserUpVotesDataController___c__DisplayClass10_0::__cordl_internal_set_upVote(::VROSC::UserUpVotesDataModel_UpVote*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___upVote)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::UserUpVotesDataController*& VROSC::UserUpVotesDataController___c__DisplayClass10_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::VROSC::UserUpVotesDataController* const& VROSC::UserUpVotesDataController___c__DisplayClass10_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void VROSC::UserUpVotesDataController___c__DisplayClass10_0::__cordl_internal_set___4__this(::VROSC::UserUpVotesDataController*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::StringW>*& VROSC::UserUpVotesDataController___c__DisplayClass10_0::__cordl_internal_get_onSuccess()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSuccess;
}
constexpr ::System::Action_1<::StringW>* const& VROSC::UserUpVotesDataController___c__DisplayClass10_0::__cordl_internal_get_onSuccess() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSuccess;
}
constexpr void VROSC::UserUpVotesDataController___c__DisplayClass10_0::__cordl_internal_set_onSuccess(::System::Action_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onSuccess)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::UserUpVotesDataController___c__DisplayClass10_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserUpVotesDataController___c__DisplayClass10_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::UserUpVotesDataController___c__DisplayClass10_0::_AddUpVoteToData_b__0(::StringW  id)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserUpVotesDataController___c__DisplayClass10_0*>::get(),
                        "<AddUpVoteToData>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, id);
}
inline ::VROSC::UserUpVotesDataController___c__DisplayClass10_0* VROSC::UserUpVotesDataController___c__DisplayClass10_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::UserUpVotesDataController___c__DisplayClass10_0*>());
}
// Ctor Parameters []
constexpr ::VROSC::UserUpVotesDataController___c__DisplayClass10_0::UserUpVotesDataController___c__DisplayClass10_0()   {
}
//  Writing Method size for method: ::VROSC::UserUpVotesDataController___c__DisplayClass11_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UserUpVotesDataController___c__DisplayClass11_0::*)()>(&::VROSC::UserUpVotesDataController___c__DisplayClass11_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x187dc60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserUpVotesDataController___c__DisplayClass11_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UserUpVotesDataController___c__DisplayClass11_0._RemoveUpVoteFromData_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UserUpVotesDataController___c__DisplayClass11_0::*)()>(&::VROSC::UserUpVotesDataController___c__DisplayClass11_0::_RemoveUpVoteFromData_b__0)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x187dd48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserUpVotesDataController___c__DisplayClass11_0*>::get(),
                        "<RemoveUpVoteFromData>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::VROSC::UserUpVotesDataController*& VROSC::UserUpVotesDataController___c__DisplayClass11_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::VROSC::UserUpVotesDataController* const& VROSC::UserUpVotesDataController___c__DisplayClass11_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void VROSC::UserUpVotesDataController___c__DisplayClass11_0::__cordl_internal_set___4__this(::VROSC::UserUpVotesDataController*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::UserUpVotesDataModel_UpVote*& VROSC::UserUpVotesDataController___c__DisplayClass11_0::__cordl_internal_get_upVote()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upVote;
}
constexpr ::VROSC::UserUpVotesDataModel_UpVote* const& VROSC::UserUpVotesDataController___c__DisplayClass11_0::__cordl_internal_get_upVote() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upVote;
}
constexpr void VROSC::UserUpVotesDataController___c__DisplayClass11_0::__cordl_internal_set_upVote(::VROSC::UserUpVotesDataModel_UpVote*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___upVote)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& VROSC::UserUpVotesDataController___c__DisplayClass11_0::__cordl_internal_get_onSuccess()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSuccess;
}
constexpr ::System::Action* const& VROSC::UserUpVotesDataController___c__DisplayClass11_0::__cordl_internal_get_onSuccess() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSuccess;
}
constexpr void VROSC::UserUpVotesDataController___c__DisplayClass11_0::__cordl_internal_set_onSuccess(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onSuccess)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::UserUpVotesDataController___c__DisplayClass11_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserUpVotesDataController___c__DisplayClass11_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::UserUpVotesDataController___c__DisplayClass11_0::_RemoveUpVoteFromData_b__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserUpVotesDataController___c__DisplayClass11_0*>::get(),
                        "<RemoveUpVoteFromData>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::UserUpVotesDataController___c__DisplayClass11_0* VROSC::UserUpVotesDataController___c__DisplayClass11_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::UserUpVotesDataController___c__DisplayClass11_0*>());
}
// Ctor Parameters []
constexpr ::VROSC::UserUpVotesDataController___c__DisplayClass11_0::UserUpVotesDataController___c__DisplayClass11_0()   {
}
//  Writing Method size for method: ::VROSC::UserUpVotesDataController___c__DisplayClass8_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UserUpVotesDataController___c__DisplayClass8_0::*)()>(&::VROSC::UserUpVotesDataController___c__DisplayClass8_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x187dc4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserUpVotesDataController___c__DisplayClass8_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UserUpVotesDataController___c__DisplayClass8_0._LoadCloudData_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UserUpVotesDataController___c__DisplayClass8_0::*)(::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*)>(&::VROSC::UserUpVotesDataController___c__DisplayClass8_0::_LoadCloudData_b__0)> {
  constexpr static std::size_t size = 0x49c;
  constexpr static std::size_t addrs = 0x187ddd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserUpVotesDataController___c__DisplayClass8_0*>::get(),
                        "<LoadCloudData>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::VROSC::UserUpVotesDataController*& VROSC::UserUpVotesDataController___c__DisplayClass8_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::VROSC::UserUpVotesDataController* const& VROSC::UserUpVotesDataController___c__DisplayClass8_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void VROSC::UserUpVotesDataController___c__DisplayClass8_0::__cordl_internal_set___4__this(::VROSC::UserUpVotesDataController*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& VROSC::UserUpVotesDataController___c__DisplayClass8_0::__cordl_internal_get_onSuccess()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSuccess;
}
constexpr ::System::Action* const& VROSC::UserUpVotesDataController___c__DisplayClass8_0::__cordl_internal_get_onSuccess() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSuccess;
}
constexpr void VROSC::UserUpVotesDataController___c__DisplayClass8_0::__cordl_internal_set_onSuccess(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onSuccess)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::UserUpVotesDataController___c__DisplayClass8_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserUpVotesDataController___c__DisplayClass8_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::UserUpVotesDataController___c__DisplayClass8_0::_LoadCloudData_b__0(::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*  data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserUpVotesDataController___c__DisplayClass8_0*>::get(),
                        "<LoadCloudData>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data);
}
inline ::VROSC::UserUpVotesDataController___c__DisplayClass8_0* VROSC::UserUpVotesDataController___c__DisplayClass8_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::UserUpVotesDataController___c__DisplayClass8_0*>());
}
// Ctor Parameters []
constexpr ::VROSC::UserUpVotesDataController___c__DisplayClass8_0::UserUpVotesDataController___c__DisplayClass8_0()   {
}
//  Writing Method size for method: ::VROSC::UserUpVotesDataController.get_DataModel
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::UserUpVotesDataModel* (::VROSC::UserUpVotesDataController::*)()>(&::VROSC::UserUpVotesDataController::get_DataModel)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x187d0c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserUpVotesDataController*>::get(),
                        "get_DataModel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UserUpVotesDataController._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UserUpVotesDataController::*)()>(&::VROSC::UserUpVotesDataController::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x187d140;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserUpVotesDataController*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UserUpVotesDataController.AddUpVote
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UserUpVotesDataController::*)(::StringW, ::StringW, ::System::Action_1<::StringW>*, ::System::Action_1<::VROSC::Error>*)>(&::VROSC::UserUpVotesDataController::AddUpVote)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x187d21c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserUpVotesDataController*>::get(),
                        "AddUpVote",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UserUpVotesDataController.RemoveUpVote
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UserUpVotesDataController::*)(::StringW, ::System::Action*, ::System::Action_1<::VROSC::Error>*)>(&::VROSC::UserUpVotesDataController::RemoveUpVote)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x187d618;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserUpVotesDataController*>::get(),
                        "RemoveUpVote",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UserUpVotesDataController.RemoveLocalUpVoteWithId
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UserUpVotesDataController::*)(::StringW)>(&::VROSC::UserUpVotesDataController::RemoveLocalUpVoteWithId)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x187d9b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserUpVotesDataController*>::get(),
                        "RemoveLocalUpVoteWithId",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UserUpVotesDataController.GetUpVoteIdFromSession
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::VROSC::UserUpVotesDataController::*)(::StringW)>(&::VROSC::UserUpVotesDataController::GetUpVoteIdFromSession)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x187dac8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserUpVotesDataController*>::get(),
                        "GetUpVoteIdFromSession",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UserUpVotesDataController.HasUpVote
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::UserUpVotesDataController::*)(::StringW)>(&::VROSC::UserUpVotesDataController::HasUpVote)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x187d398;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserUpVotesDataController*>::get(),
                        "HasUpVote",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UserUpVotesDataController.LoadCloudData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UserUpVotesDataController::*)(::System::Action*, ::System::Action_1<::VROSC::Error>*)>(&::VROSC::UserUpVotesDataController::LoadCloudData)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x187db30;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserUpVotesDataController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserUpVotesDataController*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UserUpVotesDataController.SaveCloudData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UserUpVotesDataController::*)(::System::Action*, ::System::Action_1<::VROSC::Error>*)>(&::VROSC::UserUpVotesDataController::SaveCloudData)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x187dc54;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserUpVotesDataController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserUpVotesDataController*>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UserUpVotesDataController.AddUpVoteToData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UserUpVotesDataController::*)(::VROSC::UserUpVotesDataModel_UpVote*, ::System::Action_1<::StringW>*, ::System::Action_1<::VROSC::Error>*)>(&::VROSC::UserUpVotesDataController::AddUpVoteToData)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x187d404;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserUpVotesDataController*>::get(),
                        "AddUpVoteToData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::UserUpVotesDataModel_UpVote*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UserUpVotesDataController.RemoveUpVoteFromData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UserUpVotesDataController::*)(::VROSC::UserUpVotesDataModel_UpVote*, ::System::Action*, ::System::Action_1<::VROSC::Error>*)>(&::VROSC::UserUpVotesDataController::RemoveUpVoteFromData)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x187d880;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserUpVotesDataController*>::get(),
                        "RemoveUpVoteFromData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::UserUpVotesDataModel_UpVote*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UserUpVotesDataController.GetUpVote
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::UserUpVotesDataModel_UpVote* (::VROSC::UserUpVotesDataController::*)(::StringW)>(&::VROSC::UserUpVotesDataController::GetUpVote)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x187d70c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserUpVotesDataController*>::get(),
                        "GetUpVote",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
inline ::VROSC::UserUpVotesDataModel* VROSC::UserUpVotesDataController::get_DataModel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserUpVotesDataController*>::get(),
                        "get_DataModel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::UserUpVotesDataModel*, false>(this, ___internal_method);
}
inline void VROSC::UserUpVotesDataController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserUpVotesDataController*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::UserUpVotesDataController::AddUpVote(::StringW  sessionId, ::StringW  sessionUpVoteId, ::System::Action_1<::StringW>*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserUpVotesDataController*>::get(),
                        "AddUpVote",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sessionId, sessionUpVoteId, onSuccess, onFailure);
}
inline void VROSC::UserUpVotesDataController::RemoveUpVote(::StringW  sessionId, ::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserUpVotesDataController*>::get(),
                        "RemoveUpVote",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sessionId, onSuccess, onFailure);
}
inline void VROSC::UserUpVotesDataController::RemoveLocalUpVoteWithId(::StringW  upVoteId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserUpVotesDataController*>::get(),
                        "RemoveLocalUpVoteWithId",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, upVoteId);
}
inline ::StringW VROSC::UserUpVotesDataController::GetUpVoteIdFromSession(::StringW  sessionId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserUpVotesDataController*>::get(),
                        "GetUpVoteIdFromSession",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, sessionId);
}
inline bool VROSC::UserUpVotesDataController::HasUpVote(::StringW  sessionId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserUpVotesDataController*>::get(),
                        "HasUpVote",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, sessionId);
}
inline void VROSC::UserUpVotesDataController::LoadCloudData(::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserUpVotesDataController*>::get(),
                    6
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, onSuccess, onFailure);
}
inline void VROSC::UserUpVotesDataController::SaveCloudData(::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserUpVotesDataController*>::get(),
                    7
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, onSuccess, onFailure);
}
inline void VROSC::UserUpVotesDataController::AddUpVoteToData(::VROSC::UserUpVotesDataModel_UpVote*  upVote, ::System::Action_1<::StringW>*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserUpVotesDataController*>::get(),
                        "AddUpVoteToData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::UserUpVotesDataModel_UpVote*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, upVote, onSuccess, onFailure);
}
inline void VROSC::UserUpVotesDataController::RemoveUpVoteFromData(::VROSC::UserUpVotesDataModel_UpVote*  upVote, ::System::Action*  onSuccess, ::System::Action_1<::VROSC::Error>*  onFailure)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserUpVotesDataController*>::get(),
                        "RemoveUpVoteFromData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::UserUpVotesDataModel_UpVote*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::Error>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, upVote, onSuccess, onFailure);
}
inline ::VROSC::UserUpVotesDataModel_UpVote* VROSC::UserUpVotesDataController::GetUpVote(::StringW  sessionId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UserUpVotesDataController*>::get(),
                        "GetUpVote",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::UserUpVotesDataModel_UpVote*, false>(this, ___internal_method, sessionId);
}
inline ::VROSC::UserUpVotesDataController* VROSC::UserUpVotesDataController::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::UserUpVotesDataController*>());
}
// Ctor Parameters []
constexpr ::VROSC::UserUpVotesDataController::UserUpVotesDataController()   {
}
