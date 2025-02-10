#pragma once
// IWYU pragma private; include "VROSC/CloudStateManager.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_impl.hpp"
#include "System/Collections/zzzz__IEnumerator_impl.hpp"
#include "System/zzzz__IDisposable_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/zzzz__CloudStateManager_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "VROSC/zzzz__CloudStateManager_def.hpp"
#include "VROSC/zzzz__Error_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::CloudStateManager_DownloadState::CloudStateManager_DownloadState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::VROSC::CloudStateManager_DownloadState::CloudStateManager_DownloadState()   {
}
constexpr ::VROSC::CloudStateManager_DownloadState  VROSC::CloudStateManager_DownloadState::None{static_cast<int32_t>(0x0)};
constexpr ::VROSC::CloudStateManager_DownloadState  VROSC::CloudStateManager_DownloadState::DownloadingSession{static_cast<int32_t>(0x1)};
constexpr ::VROSC::CloudStateManager_DownloadState  VROSC::CloudStateManager_DownloadState::Waiting{static_cast<int32_t>(0x2)};
constexpr ::VROSC::CloudStateManager_DownloadState  VROSC::CloudStateManager_DownloadState::DownloadedSession{static_cast<int32_t>(0x3)};
constexpr ::VROSC::CloudStateManager_DownloadState  VROSC::CloudStateManager_DownloadState::Abort{static_cast<int32_t>(0x4)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::CloudStateManager_UploadState::CloudStateManager_UploadState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::VROSC::CloudStateManager_UploadState::CloudStateManager_UploadState()   {
}
constexpr ::VROSC::CloudStateManager_UploadState  VROSC::CloudStateManager_UploadState::None{static_cast<int32_t>(0x0)};
constexpr ::VROSC::CloudStateManager_UploadState  VROSC::CloudStateManager_UploadState::UploadingSession{static_cast<int32_t>(0x1)};
constexpr ::VROSC::CloudStateManager_UploadState  VROSC::CloudStateManager_UploadState::Waiting{static_cast<int32_t>(0x2)};
constexpr ::VROSC::CloudStateManager_UploadState  VROSC::CloudStateManager_UploadState::UploadedSession{static_cast<int32_t>(0x3)};
constexpr ::VROSC::CloudStateManager_UploadState  VROSC::CloudStateManager_UploadState::Abort{static_cast<int32_t>(0x4)};
//  Writing Method size for method: ::VROSC::CloudStateManager___c__DisplayClass18_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::CloudStateManager___c__DisplayClass18_0::*)()>(&::VROSC::CloudStateManager___c__DisplayClass18_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18323e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager___c__DisplayClass18_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::CloudStateManager___c__DisplayClass18_0._CoDownloadSession_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::CloudStateManager___c__DisplayClass18_0::*)()>(&::VROSC::CloudStateManager___c__DisplayClass18_0::_CoDownloadSession_b__0)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x18323e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager___c__DisplayClass18_0*>::get(),
                        "<CoDownloadSession>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::CloudStateManager___c__DisplayClass18_0._CoDownloadSession_b__1
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::CloudStateManager___c__DisplayClass18_0::*)(float_t)>(&::VROSC::CloudStateManager___c__DisplayClass18_0::_CoDownloadSession_b__1)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x183247c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager___c__DisplayClass18_0*>::get(),
                        "<CoDownloadSession>b__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::CloudStateManager___c__DisplayClass18_0._CoDownloadSession_b__2
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::CloudStateManager___c__DisplayClass18_0::*)(::VROSC::Error)>(&::VROSC::CloudStateManager___c__DisplayClass18_0::_CoDownloadSession_b__2)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18324fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager___c__DisplayClass18_0*>::get(),
                        "<CoDownloadSession>b__2",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Error>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& VROSC::CloudStateManager___c__DisplayClass18_0::__cordl_internal_get_sessionName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sessionName;
}
constexpr ::StringW const& VROSC::CloudStateManager___c__DisplayClass18_0::__cordl_internal_get_sessionName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sessionName;
}
constexpr void VROSC::CloudStateManager___c__DisplayClass18_0::__cordl_internal_set_sessionName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sessionName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::CloudStateManager___c__DisplayClass18_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager___c__DisplayClass18_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::CloudStateManager___c__DisplayClass18_0::_CoDownloadSession_b__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager___c__DisplayClass18_0*>::get(),
                        "<CoDownloadSession>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::CloudStateManager___c__DisplayClass18_0::_CoDownloadSession_b__1(float_t  p)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager___c__DisplayClass18_0*>::get(),
                        "<CoDownloadSession>b__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, p);
}
inline void VROSC::CloudStateManager___c__DisplayClass18_0::_CoDownloadSession_b__2(::VROSC::Error  e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager___c__DisplayClass18_0*>::get(),
                        "<CoDownloadSession>b__2",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Error>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, e);
}
inline ::VROSC::CloudStateManager___c__DisplayClass18_0* VROSC::CloudStateManager___c__DisplayClass18_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::CloudStateManager___c__DisplayClass18_0*>());
}
// Ctor Parameters []
constexpr ::VROSC::CloudStateManager___c__DisplayClass18_0::CloudStateManager___c__DisplayClass18_0()   {
}
//  Writing Method size for method: ::VROSC::CloudStateManager___c__DisplayClass20_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::CloudStateManager___c__DisplayClass20_0::*)()>(&::VROSC::CloudStateManager___c__DisplayClass20_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x183257c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager___c__DisplayClass20_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::CloudStateManager___c__DisplayClass20_0._CoUploadSession_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::CloudStateManager___c__DisplayClass20_0::*)()>(&::VROSC::CloudStateManager___c__DisplayClass20_0::_CoUploadSession_b__0)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x1832584;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager___c__DisplayClass20_0*>::get(),
                        "<CoUploadSession>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::CloudStateManager___c__DisplayClass20_0._CoUploadSession_b__3
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::CloudStateManager___c__DisplayClass20_0::*)()>(&::VROSC::CloudStateManager___c__DisplayClass20_0::_CoUploadSession_b__3)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x1832a94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager___c__DisplayClass20_0*>::get(),
                        "<CoUploadSession>b__3",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::CloudStateManager___c__DisplayClass20_0._CoUploadSession_b__4
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::CloudStateManager___c__DisplayClass20_0::*)(float_t)>(&::VROSC::CloudStateManager___c__DisplayClass20_0::_CoUploadSession_b__4)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1832b28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager___c__DisplayClass20_0*>::get(),
                        "<CoUploadSession>b__4",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::CloudStateManager___c__DisplayClass20_0._CoUploadSession_b__5
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::CloudStateManager___c__DisplayClass20_0::*)(::VROSC::Error)>(&::VROSC::CloudStateManager___c__DisplayClass20_0::_CoUploadSession_b__5)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1832ba8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager___c__DisplayClass20_0*>::get(),
                        "<CoUploadSession>b__5",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Error>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::CloudStateManager___c__DisplayClass20_0._CoUploadSession_b__1
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::CloudStateManager___c__DisplayClass20_0::*)(float_t)>(&::VROSC::CloudStateManager___c__DisplayClass20_0::_CoUploadSession_b__1)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1832c28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager___c__DisplayClass20_0*>::get(),
                        "<CoUploadSession>b__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::CloudStateManager___c__DisplayClass20_0._CoUploadSession_b__2
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::CloudStateManager___c__DisplayClass20_0::*)(::VROSC::Error)>(&::VROSC::CloudStateManager___c__DisplayClass20_0::_CoUploadSession_b__2)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1832ca8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager___c__DisplayClass20_0*>::get(),
                        "<CoUploadSession>b__2",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Error>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr bool& VROSC::CloudStateManager___c__DisplayClass20_0::__cordl_internal_get_hasPreview()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasPreview;
}
constexpr bool const& VROSC::CloudStateManager___c__DisplayClass20_0::__cordl_internal_get_hasPreview() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasPreview;
}
constexpr void VROSC::CloudStateManager___c__DisplayClass20_0::__cordl_internal_set_hasPreview(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasPreview = value;
}
constexpr ::StringW& VROSC::CloudStateManager___c__DisplayClass20_0::__cordl_internal_get_sessionName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sessionName;
}
constexpr ::StringW const& VROSC::CloudStateManager___c__DisplayClass20_0::__cordl_internal_get_sessionName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sessionName;
}
constexpr void VROSC::CloudStateManager___c__DisplayClass20_0::__cordl_internal_set_sessionName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sessionName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& VROSC::CloudStateManager___c__DisplayClass20_0::__cordl_internal_get_isCommunity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isCommunity;
}
constexpr bool const& VROSC::CloudStateManager___c__DisplayClass20_0::__cordl_internal_get_isCommunity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isCommunity;
}
constexpr void VROSC::CloudStateManager___c__DisplayClass20_0::__cordl_internal_set_isCommunity(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isCommunity = value;
}
constexpr ::System::Action*& VROSC::CloudStateManager___c__DisplayClass20_0::__cordl_internal_get___9__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__3;
}
constexpr ::System::Action* const& VROSC::CloudStateManager___c__DisplayClass20_0::__cordl_internal_get___9__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__3;
}
constexpr void VROSC::CloudStateManager___c__DisplayClass20_0::__cordl_internal_set___9__3(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____9__3)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<float_t>*& VROSC::CloudStateManager___c__DisplayClass20_0::__cordl_internal_get___9__4()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__4;
}
constexpr ::System::Action_1<float_t>* const& VROSC::CloudStateManager___c__DisplayClass20_0::__cordl_internal_get___9__4() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__4;
}
constexpr void VROSC::CloudStateManager___c__DisplayClass20_0::__cordl_internal_set___9__4(::System::Action_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____9__4)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::VROSC::Error>*& VROSC::CloudStateManager___c__DisplayClass20_0::__cordl_internal_get___9__5()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__5;
}
constexpr ::System::Action_1<::VROSC::Error>* const& VROSC::CloudStateManager___c__DisplayClass20_0::__cordl_internal_get___9__5() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__5;
}
constexpr void VROSC::CloudStateManager___c__DisplayClass20_0::__cordl_internal_set___9__5(::System::Action_1<::VROSC::Error>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____9__5)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::CloudStateManager___c__DisplayClass20_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager___c__DisplayClass20_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::CloudStateManager___c__DisplayClass20_0::_CoUploadSession_b__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager___c__DisplayClass20_0*>::get(),
                        "<CoUploadSession>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::CloudStateManager___c__DisplayClass20_0::_CoUploadSession_b__3()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager___c__DisplayClass20_0*>::get(),
                        "<CoUploadSession>b__3",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::CloudStateManager___c__DisplayClass20_0::_CoUploadSession_b__4(float_t  progress)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager___c__DisplayClass20_0*>::get(),
                        "<CoUploadSession>b__4",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, progress);
}
inline void VROSC::CloudStateManager___c__DisplayClass20_0::_CoUploadSession_b__5(::VROSC::Error  error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager___c__DisplayClass20_0*>::get(),
                        "<CoUploadSession>b__5",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Error>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, error);
}
inline void VROSC::CloudStateManager___c__DisplayClass20_0::_CoUploadSession_b__1(float_t  progress)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager___c__DisplayClass20_0*>::get(),
                        "<CoUploadSession>b__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, progress);
}
inline void VROSC::CloudStateManager___c__DisplayClass20_0::_CoUploadSession_b__2(::VROSC::Error  error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager___c__DisplayClass20_0*>::get(),
                        "<CoUploadSession>b__2",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Error>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, error);
}
inline ::VROSC::CloudStateManager___c__DisplayClass20_0* VROSC::CloudStateManager___c__DisplayClass20_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::CloudStateManager___c__DisplayClass20_0*>());
}
// Ctor Parameters []
constexpr ::VROSC::CloudStateManager___c__DisplayClass20_0::CloudStateManager___c__DisplayClass20_0()   {
}
//  Writing Method size for method: ::VROSC::CloudStateManager___c__DisplayClass22_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::CloudStateManager___c__DisplayClass22_0::*)()>(&::VROSC::CloudStateManager___c__DisplayClass22_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x183208c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager___c__DisplayClass22_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::CloudStateManager___c__DisplayClass22_0._DownloadPreview_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::CloudStateManager___c__DisplayClass22_0::*)(::StringW)>(&::VROSC::CloudStateManager___c__DisplayClass22_0::_DownloadPreview_b__0)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x1832d28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager___c__DisplayClass22_0*>::get(),
                        "<DownloadPreview>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::CloudStateManager___c__DisplayClass22_0._DownloadPreview_b__1
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::CloudStateManager___c__DisplayClass22_0::*)(float_t)>(&::VROSC::CloudStateManager___c__DisplayClass22_0::_DownloadPreview_b__1)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1832dc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager___c__DisplayClass22_0*>::get(),
                        "<DownloadPreview>b__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::CloudStateManager___c__DisplayClass22_0._DownloadPreview_b__2
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::CloudStateManager___c__DisplayClass22_0::*)(::VROSC::Error)>(&::VROSC::CloudStateManager___c__DisplayClass22_0::_DownloadPreview_b__2)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1832e40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager___c__DisplayClass22_0*>::get(),
                        "<DownloadPreview>b__2",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Error>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& VROSC::CloudStateManager___c__DisplayClass22_0::__cordl_internal_get_sessionName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sessionName;
}
constexpr ::StringW const& VROSC::CloudStateManager___c__DisplayClass22_0::__cordl_internal_get_sessionName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sessionName;
}
constexpr void VROSC::CloudStateManager___c__DisplayClass22_0::__cordl_internal_set_sessionName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sessionName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& VROSC::CloudStateManager___c__DisplayClass22_0::__cordl_internal_get_isOgg()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isOgg;
}
constexpr bool const& VROSC::CloudStateManager___c__DisplayClass22_0::__cordl_internal_get_isOgg() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isOgg;
}
constexpr void VROSC::CloudStateManager___c__DisplayClass22_0::__cordl_internal_set_isOgg(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isOgg = value;
}
inline void VROSC::CloudStateManager___c__DisplayClass22_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager___c__DisplayClass22_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::CloudStateManager___c__DisplayClass22_0::_DownloadPreview_b__0(::StringW  file)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager___c__DisplayClass22_0*>::get(),
                        "<DownloadPreview>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, file);
}
inline void VROSC::CloudStateManager___c__DisplayClass22_0::_DownloadPreview_b__1(float_t  p)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager___c__DisplayClass22_0*>::get(),
                        "<DownloadPreview>b__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, p);
}
inline void VROSC::CloudStateManager___c__DisplayClass22_0::_DownloadPreview_b__2(::VROSC::Error  e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager___c__DisplayClass22_0*>::get(),
                        "<DownloadPreview>b__2",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Error>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, e);
}
inline ::VROSC::CloudStateManager___c__DisplayClass22_0* VROSC::CloudStateManager___c__DisplayClass22_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::CloudStateManager___c__DisplayClass22_0*>());
}
// Ctor Parameters []
constexpr ::VROSC::CloudStateManager___c__DisplayClass22_0::CloudStateManager___c__DisplayClass22_0()   {
}
//  Writing Method size for method: ::VROSC::CloudStateManager___c__DisplayClass23_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::CloudStateManager___c__DisplayClass23_0::*)()>(&::VROSC::CloudStateManager___c__DisplayClass23_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1832ec0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager___c__DisplayClass23_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::CloudStateManager___c__DisplayClass23_0._CoDeleteSession_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::CloudStateManager___c__DisplayClass23_0::*)()>(&::VROSC::CloudStateManager___c__DisplayClass23_0::_CoDeleteSession_b__0)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x1832ec8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager___c__DisplayClass23_0*>::get(),
                        "<CoDeleteSession>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::CloudStateManager___c__DisplayClass23_0._CoDeleteSession_b__2
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::CloudStateManager___c__DisplayClass23_0::*)()>(&::VROSC::CloudStateManager___c__DisplayClass23_0::_CoDeleteSession_b__2)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x1833154;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager___c__DisplayClass23_0*>::get(),
                        "<CoDeleteSession>b__2",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::CloudStateManager___c__DisplayClass23_0._CoDeleteSession_b__3
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::CloudStateManager___c__DisplayClass23_0::*)(::VROSC::Error)>(&::VROSC::CloudStateManager___c__DisplayClass23_0::_CoDeleteSession_b__3)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x18331c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager___c__DisplayClass23_0*>::get(),
                        "<CoDeleteSession>b__3",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Error>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::CloudStateManager___c__DisplayClass23_0._CoDeleteSession_b__1
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::CloudStateManager___c__DisplayClass23_0::*)(::VROSC::Error)>(&::VROSC::CloudStateManager___c__DisplayClass23_0::_CoDeleteSession_b__1)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1833294;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager___c__DisplayClass23_0*>::get(),
                        "<CoDeleteSession>b__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Error>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& VROSC::CloudStateManager___c__DisplayClass23_0::__cordl_internal_get_sessionName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sessionName;
}
constexpr ::StringW const& VROSC::CloudStateManager___c__DisplayClass23_0::__cordl_internal_get_sessionName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sessionName;
}
constexpr void VROSC::CloudStateManager___c__DisplayClass23_0::__cordl_internal_set_sessionName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sessionName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& VROSC::CloudStateManager___c__DisplayClass23_0::__cordl_internal_get_isCommunity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isCommunity;
}
constexpr bool const& VROSC::CloudStateManager___c__DisplayClass23_0::__cordl_internal_get_isCommunity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isCommunity;
}
constexpr void VROSC::CloudStateManager___c__DisplayClass23_0::__cordl_internal_set_isCommunity(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isCommunity = value;
}
constexpr bool& VROSC::CloudStateManager___c__DisplayClass23_0::__cordl_internal_get_isOgg()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isOgg;
}
constexpr bool const& VROSC::CloudStateManager___c__DisplayClass23_0::__cordl_internal_get_isOgg() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isOgg;
}
constexpr void VROSC::CloudStateManager___c__DisplayClass23_0::__cordl_internal_set_isOgg(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isOgg = value;
}
constexpr ::System::Action*& VROSC::CloudStateManager___c__DisplayClass23_0::__cordl_internal_get___9__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__2;
}
constexpr ::System::Action* const& VROSC::CloudStateManager___c__DisplayClass23_0::__cordl_internal_get___9__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__2;
}
constexpr void VROSC::CloudStateManager___c__DisplayClass23_0::__cordl_internal_set___9__2(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____9__2)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::VROSC::Error>*& VROSC::CloudStateManager___c__DisplayClass23_0::__cordl_internal_get___9__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__3;
}
constexpr ::System::Action_1<::VROSC::Error>* const& VROSC::CloudStateManager___c__DisplayClass23_0::__cordl_internal_get___9__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__3;
}
constexpr void VROSC::CloudStateManager___c__DisplayClass23_0::__cordl_internal_set___9__3(::System::Action_1<::VROSC::Error>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____9__3)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::CloudStateManager___c__DisplayClass23_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager___c__DisplayClass23_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::CloudStateManager___c__DisplayClass23_0::_CoDeleteSession_b__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager___c__DisplayClass23_0*>::get(),
                        "<CoDeleteSession>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::CloudStateManager___c__DisplayClass23_0::_CoDeleteSession_b__2()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager___c__DisplayClass23_0*>::get(),
                        "<CoDeleteSession>b__2",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::CloudStateManager___c__DisplayClass23_0::_CoDeleteSession_b__3(::VROSC::Error  e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager___c__DisplayClass23_0*>::get(),
                        "<CoDeleteSession>b__3",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Error>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, e);
}
inline void VROSC::CloudStateManager___c__DisplayClass23_0::_CoDeleteSession_b__1(::VROSC::Error  e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager___c__DisplayClass23_0*>::get(),
                        "<CoDeleteSession>b__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Error>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, e);
}
inline ::VROSC::CloudStateManager___c__DisplayClass23_0* VROSC::CloudStateManager___c__DisplayClass23_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::CloudStateManager___c__DisplayClass23_0*>());
}
// Ctor Parameters []
constexpr ::VROSC::CloudStateManager___c__DisplayClass23_0::CloudStateManager___c__DisplayClass23_0()   {
}
//  Writing Method size for method: ::VROSC::CloudStateManager__CoDeleteSession_d__23._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::CloudStateManager__CoDeleteSession_d__23::*)(int32_t)>(&::VROSC::CloudStateManager__CoDeleteSession_d__23::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x18323b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager__CoDeleteSession_d__23*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::CloudStateManager__CoDeleteSession_d__23.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::CloudStateManager__CoDeleteSession_d__23::*)()>(&::VROSC::CloudStateManager__CoDeleteSession_d__23::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1833314;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager__CoDeleteSession_d__23*>::get(),
                        "System.IDisposable.Dispose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::CloudStateManager__CoDeleteSession_d__23.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::CloudStateManager__CoDeleteSession_d__23::*)()>(&::VROSC::CloudStateManager__CoDeleteSession_d__23::MoveNext)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x1833318;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager__CoDeleteSession_d__23*>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::CloudStateManager__CoDeleteSession_d__23.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::VROSC::CloudStateManager__CoDeleteSession_d__23::*)()>(&::VROSC::CloudStateManager__CoDeleteSession_d__23::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18336b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager__CoDeleteSession_d__23*>::get(),
                        "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::CloudStateManager__CoDeleteSession_d__23.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::CloudStateManager__CoDeleteSession_d__23::*)()>(&::VROSC::CloudStateManager__CoDeleteSession_d__23::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x18336c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager__CoDeleteSession_d__23*>::get(),
                        "System.Collections.IEnumerator.Reset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::CloudStateManager__CoDeleteSession_d__23.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::VROSC::CloudStateManager__CoDeleteSession_d__23::*)()>(&::VROSC::CloudStateManager__CoDeleteSession_d__23::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18336f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager__CoDeleteSession_d__23*>::get(),
                        "System.Collections.IEnumerator.get_Current",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& VROSC::CloudStateManager__CoDeleteSession_d__23::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& VROSC::CloudStateManager__CoDeleteSession_d__23::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void VROSC::CloudStateManager__CoDeleteSession_d__23::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& VROSC::CloudStateManager__CoDeleteSession_d__23::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& VROSC::CloudStateManager__CoDeleteSession_d__23::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void VROSC::CloudStateManager__CoDeleteSession_d__23::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& VROSC::CloudStateManager__CoDeleteSession_d__23::__cordl_internal_get_sessionName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sessionName;
}
constexpr ::StringW const& VROSC::CloudStateManager__CoDeleteSession_d__23::__cordl_internal_get_sessionName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sessionName;
}
constexpr void VROSC::CloudStateManager__CoDeleteSession_d__23::__cordl_internal_set_sessionName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sessionName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& VROSC::CloudStateManager__CoDeleteSession_d__23::__cordl_internal_get_isCommunity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isCommunity;
}
constexpr bool const& VROSC::CloudStateManager__CoDeleteSession_d__23::__cordl_internal_get_isCommunity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isCommunity;
}
constexpr void VROSC::CloudStateManager__CoDeleteSession_d__23::__cordl_internal_set_isCommunity(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isCommunity = value;
}
constexpr bool& VROSC::CloudStateManager__CoDeleteSession_d__23::__cordl_internal_get_isOgg()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isOgg;
}
constexpr bool const& VROSC::CloudStateManager__CoDeleteSession_d__23::__cordl_internal_get_isOgg() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isOgg;
}
constexpr void VROSC::CloudStateManager__CoDeleteSession_d__23::__cordl_internal_set_isOgg(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isOgg = value;
}
constexpr ::UnityW<::VROSC::CloudStateManager>& VROSC::CloudStateManager__CoDeleteSession_d__23::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::VROSC::CloudStateManager> const& VROSC::CloudStateManager__CoDeleteSession_d__23::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void VROSC::CloudStateManager__CoDeleteSession_d__23::__cordl_internal_set___4__this(::UnityW<::VROSC::CloudStateManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::CloudStateManager___c__DisplayClass23_0*& VROSC::CloudStateManager__CoDeleteSession_d__23::__cordl_internal_get___8__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____8__1;
}
constexpr ::VROSC::CloudStateManager___c__DisplayClass23_0* const& VROSC::CloudStateManager__CoDeleteSession_d__23::__cordl_internal_get___8__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____8__1;
}
constexpr void VROSC::CloudStateManager__CoDeleteSession_d__23::__cordl_internal_set___8__1(::VROSC::CloudStateManager___c__DisplayClass23_0*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____8__1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::CloudStateManager__CoDeleteSession_d__23::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager__CoDeleteSession_d__23*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void VROSC::CloudStateManager__CoDeleteSession_d__23::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager__CoDeleteSession_d__23*>::get(),
                        "System.IDisposable.Dispose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool VROSC::CloudStateManager__CoDeleteSession_d__23::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager__CoDeleteSession_d__23*>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* VROSC::CloudStateManager__CoDeleteSession_d__23::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager__CoDeleteSession_d__23*>::get(),
                        "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void VROSC::CloudStateManager__CoDeleteSession_d__23::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager__CoDeleteSession_d__23*>::get(),
                        "System.Collections.IEnumerator.Reset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* VROSC::CloudStateManager__CoDeleteSession_d__23::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager__CoDeleteSession_d__23*>::get(),
                        "System.Collections.IEnumerator.get_Current",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::VROSC::CloudStateManager__CoDeleteSession_d__23* VROSC::CloudStateManager__CoDeleteSession_d__23::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::CloudStateManager__CoDeleteSession_d__23*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  VROSC::CloudStateManager__CoDeleteSession_d__23::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* VROSC::CloudStateManager__CoDeleteSession_d__23::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  VROSC::CloudStateManager__CoDeleteSession_d__23::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* VROSC::CloudStateManager__CoDeleteSession_d__23::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  VROSC::CloudStateManager__CoDeleteSession_d__23::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* VROSC::CloudStateManager__CoDeleteSession_d__23::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::VROSC::CloudStateManager__CoDeleteSession_d__23::CloudStateManager__CoDeleteSession_d__23()   {
}
//  Writing Method size for method: ::VROSC::CloudStateManager__CoDownloadSession_d__18._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::CloudStateManager__CoDownloadSession_d__18::*)(int32_t)>(&::VROSC::CloudStateManager__CoDownloadSession_d__18::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x1831a9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager__CoDownloadSession_d__18*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::CloudStateManager__CoDownloadSession_d__18.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::CloudStateManager__CoDownloadSession_d__18::*)()>(&::VROSC::CloudStateManager__CoDownloadSession_d__18::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1833700;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager__CoDownloadSession_d__18*>::get(),
                        "System.IDisposable.Dispose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::CloudStateManager__CoDownloadSession_d__18.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::CloudStateManager__CoDownloadSession_d__18::*)()>(&::VROSC::CloudStateManager__CoDownloadSession_d__18::MoveNext)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x1833704;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager__CoDownloadSession_d__18*>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::CloudStateManager__CoDownloadSession_d__18.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::VROSC::CloudStateManager__CoDownloadSession_d__18::*)()>(&::VROSC::CloudStateManager__CoDownloadSession_d__18::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1833c78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager__CoDownloadSession_d__18*>::get(),
                        "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::CloudStateManager__CoDownloadSession_d__18.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::CloudStateManager__CoDownloadSession_d__18::*)()>(&::VROSC::CloudStateManager__CoDownloadSession_d__18::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x1833c80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager__CoDownloadSession_d__18*>::get(),
                        "System.Collections.IEnumerator.Reset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::CloudStateManager__CoDownloadSession_d__18.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::VROSC::CloudStateManager__CoDownloadSession_d__18::*)()>(&::VROSC::CloudStateManager__CoDownloadSession_d__18::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1833cb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager__CoDownloadSession_d__18*>::get(),
                        "System.Collections.IEnumerator.get_Current",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& VROSC::CloudStateManager__CoDownloadSession_d__18::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& VROSC::CloudStateManager__CoDownloadSession_d__18::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void VROSC::CloudStateManager__CoDownloadSession_d__18::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& VROSC::CloudStateManager__CoDownloadSession_d__18::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& VROSC::CloudStateManager__CoDownloadSession_d__18::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void VROSC::CloudStateManager__CoDownloadSession_d__18::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& VROSC::CloudStateManager__CoDownloadSession_d__18::__cordl_internal_get_sessionName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sessionName;
}
constexpr ::StringW const& VROSC::CloudStateManager__CoDownloadSession_d__18::__cordl_internal_get_sessionName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sessionName;
}
constexpr void VROSC::CloudStateManager__CoDownloadSession_d__18::__cordl_internal_set_sessionName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sessionName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::CloudStateManager>& VROSC::CloudStateManager__CoDownloadSession_d__18::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::VROSC::CloudStateManager> const& VROSC::CloudStateManager__CoDownloadSession_d__18::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void VROSC::CloudStateManager__CoDownloadSession_d__18::__cordl_internal_set___4__this(::UnityW<::VROSC::CloudStateManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& VROSC::CloudStateManager__CoDownloadSession_d__18::__cordl_internal_get_userId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___userId;
}
constexpr ::StringW const& VROSC::CloudStateManager__CoDownloadSession_d__18::__cordl_internal_get_userId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___userId;
}
constexpr void VROSC::CloudStateManager__CoDownloadSession_d__18::__cordl_internal_set_userId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___userId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::CloudStateManager___c__DisplayClass18_0*& VROSC::CloudStateManager__CoDownloadSession_d__18::__cordl_internal_get___8__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____8__1;
}
constexpr ::VROSC::CloudStateManager___c__DisplayClass18_0* const& VROSC::CloudStateManager__CoDownloadSession_d__18::__cordl_internal_get___8__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____8__1;
}
constexpr void VROSC::CloudStateManager__CoDownloadSession_d__18::__cordl_internal_set___8__1(::VROSC::CloudStateManager___c__DisplayClass18_0*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____8__1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& VROSC::CloudStateManager__CoDownloadSession_d__18::__cordl_internal_get_isCommunity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isCommunity;
}
constexpr bool const& VROSC::CloudStateManager__CoDownloadSession_d__18::__cordl_internal_get_isCommunity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isCommunity;
}
constexpr void VROSC::CloudStateManager__CoDownloadSession_d__18::__cordl_internal_set_isCommunity(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isCommunity = value;
}
inline void VROSC::CloudStateManager__CoDownloadSession_d__18::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager__CoDownloadSession_d__18*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void VROSC::CloudStateManager__CoDownloadSession_d__18::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager__CoDownloadSession_d__18*>::get(),
                        "System.IDisposable.Dispose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool VROSC::CloudStateManager__CoDownloadSession_d__18::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager__CoDownloadSession_d__18*>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* VROSC::CloudStateManager__CoDownloadSession_d__18::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager__CoDownloadSession_d__18*>::get(),
                        "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void VROSC::CloudStateManager__CoDownloadSession_d__18::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager__CoDownloadSession_d__18*>::get(),
                        "System.Collections.IEnumerator.Reset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* VROSC::CloudStateManager__CoDownloadSession_d__18::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager__CoDownloadSession_d__18*>::get(),
                        "System.Collections.IEnumerator.get_Current",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::VROSC::CloudStateManager__CoDownloadSession_d__18* VROSC::CloudStateManager__CoDownloadSession_d__18::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::CloudStateManager__CoDownloadSession_d__18*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  VROSC::CloudStateManager__CoDownloadSession_d__18::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* VROSC::CloudStateManager__CoDownloadSession_d__18::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  VROSC::CloudStateManager__CoDownloadSession_d__18::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* VROSC::CloudStateManager__CoDownloadSession_d__18::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  VROSC::CloudStateManager__CoDownloadSession_d__18::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* VROSC::CloudStateManager__CoDownloadSession_d__18::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::VROSC::CloudStateManager__CoDownloadSession_d__18::CloudStateManager__CoDownloadSession_d__18()   {
}
//  Writing Method size for method: ::VROSC::CloudStateManager__CoUploadSession_d__20._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::CloudStateManager__CoUploadSession_d__20::*)(int32_t)>(&::VROSC::CloudStateManager__CoUploadSession_d__20::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x1831cbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager__CoUploadSession_d__20*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::CloudStateManager__CoUploadSession_d__20.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::CloudStateManager__CoUploadSession_d__20::*)()>(&::VROSC::CloudStateManager__CoUploadSession_d__20::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1833cc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager__CoUploadSession_d__20*>::get(),
                        "System.IDisposable.Dispose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::CloudStateManager__CoUploadSession_d__20.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::CloudStateManager__CoUploadSession_d__20::*)()>(&::VROSC::CloudStateManager__CoUploadSession_d__20::MoveNext)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x1833cc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager__CoUploadSession_d__20*>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::CloudStateManager__CoUploadSession_d__20.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::VROSC::CloudStateManager__CoUploadSession_d__20::*)()>(&::VROSC::CloudStateManager__CoUploadSession_d__20::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1834208;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager__CoUploadSession_d__20*>::get(),
                        "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::CloudStateManager__CoUploadSession_d__20.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::CloudStateManager__CoUploadSession_d__20::*)()>(&::VROSC::CloudStateManager__CoUploadSession_d__20::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x1834210;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager__CoUploadSession_d__20*>::get(),
                        "System.Collections.IEnumerator.Reset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::CloudStateManager__CoUploadSession_d__20.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::VROSC::CloudStateManager__CoUploadSession_d__20::*)()>(&::VROSC::CloudStateManager__CoUploadSession_d__20::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1834248;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager__CoUploadSession_d__20*>::get(),
                        "System.Collections.IEnumerator.get_Current",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& VROSC::CloudStateManager__CoUploadSession_d__20::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& VROSC::CloudStateManager__CoUploadSession_d__20::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void VROSC::CloudStateManager__CoUploadSession_d__20::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& VROSC::CloudStateManager__CoUploadSession_d__20::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& VROSC::CloudStateManager__CoUploadSession_d__20::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void VROSC::CloudStateManager__CoUploadSession_d__20::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& VROSC::CloudStateManager__CoUploadSession_d__20::__cordl_internal_get_hasPreview()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasPreview;
}
constexpr bool const& VROSC::CloudStateManager__CoUploadSession_d__20::__cordl_internal_get_hasPreview() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasPreview;
}
constexpr void VROSC::CloudStateManager__CoUploadSession_d__20::__cordl_internal_set_hasPreview(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasPreview = value;
}
constexpr ::StringW& VROSC::CloudStateManager__CoUploadSession_d__20::__cordl_internal_get_sessionName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sessionName;
}
constexpr ::StringW const& VROSC::CloudStateManager__CoUploadSession_d__20::__cordl_internal_get_sessionName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sessionName;
}
constexpr void VROSC::CloudStateManager__CoUploadSession_d__20::__cordl_internal_set_sessionName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sessionName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& VROSC::CloudStateManager__CoUploadSession_d__20::__cordl_internal_get_isCommunity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isCommunity;
}
constexpr bool const& VROSC::CloudStateManager__CoUploadSession_d__20::__cordl_internal_get_isCommunity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isCommunity;
}
constexpr void VROSC::CloudStateManager__CoUploadSession_d__20::__cordl_internal_set_isCommunity(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isCommunity = value;
}
constexpr ::UnityW<::VROSC::CloudStateManager>& VROSC::CloudStateManager__CoUploadSession_d__20::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::VROSC::CloudStateManager> const& VROSC::CloudStateManager__CoUploadSession_d__20::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void VROSC::CloudStateManager__CoUploadSession_d__20::__cordl_internal_set___4__this(::UnityW<::VROSC::CloudStateManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::CloudStateManager___c__DisplayClass20_0*& VROSC::CloudStateManager__CoUploadSession_d__20::__cordl_internal_get___8__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____8__1;
}
constexpr ::VROSC::CloudStateManager___c__DisplayClass20_0* const& VROSC::CloudStateManager__CoUploadSession_d__20::__cordl_internal_get___8__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____8__1;
}
constexpr void VROSC::CloudStateManager__CoUploadSession_d__20::__cordl_internal_set___8__1(::VROSC::CloudStateManager___c__DisplayClass20_0*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____8__1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::CloudStateManager__CoUploadSession_d__20::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager__CoUploadSession_d__20*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void VROSC::CloudStateManager__CoUploadSession_d__20::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager__CoUploadSession_d__20*>::get(),
                        "System.IDisposable.Dispose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool VROSC::CloudStateManager__CoUploadSession_d__20::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager__CoUploadSession_d__20*>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* VROSC::CloudStateManager__CoUploadSession_d__20::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager__CoUploadSession_d__20*>::get(),
                        "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void VROSC::CloudStateManager__CoUploadSession_d__20::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager__CoUploadSession_d__20*>::get(),
                        "System.Collections.IEnumerator.Reset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* VROSC::CloudStateManager__CoUploadSession_d__20::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager__CoUploadSession_d__20*>::get(),
                        "System.Collections.IEnumerator.get_Current",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::VROSC::CloudStateManager__CoUploadSession_d__20* VROSC::CloudStateManager__CoUploadSession_d__20::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::CloudStateManager__CoUploadSession_d__20*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  VROSC::CloudStateManager__CoUploadSession_d__20::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* VROSC::CloudStateManager__CoUploadSession_d__20::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  VROSC::CloudStateManager__CoUploadSession_d__20::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* VROSC::CloudStateManager__CoUploadSession_d__20::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  VROSC::CloudStateManager__CoUploadSession_d__20::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* VROSC::CloudStateManager__CoUploadSession_d__20::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::VROSC::CloudStateManager__CoUploadSession_d__20::CloudStateManager__CoUploadSession_d__20()   {
}
//  Writing Method size for method: ::VROSC::CloudStateManager.Awake
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::CloudStateManager::*)()>(&::VROSC::CloudStateManager::Awake)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x18316fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::CloudStateManager.DownloadSessionFromCloud
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::CloudStateManager::*)(::StringW, ::StringW, bool)>(&::VROSC::CloudStateManager::DownloadSessionFromCloud)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x18318ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager*>::get(),
                        "DownloadSessionFromCloud",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::CloudStateManager.CoDownloadSession
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::VROSC::CloudStateManager::*)(::StringW, ::StringW, bool)>(&::VROSC::CloudStateManager::CoDownloadSession)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x1831a14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager*>::get(),
                        "CoDownloadSession",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::CloudStateManager.UploadSessionToCloud
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::CloudStateManager::*)(::StringW, bool, bool)>(&::VROSC::CloudStateManager::UploadSessionToCloud)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x1831ac4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager*>::get(),
                        "UploadSessionToCloud",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::CloudStateManager.CoUploadSession
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::VROSC::CloudStateManager::*)(::StringW, bool, bool)>(&::VROSC::CloudStateManager::CoUploadSession)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1831c2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager*>::get(),
                        "CoUploadSession",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::CloudStateManager.DeleteSessionFromCloud
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::CloudStateManager::*)(::StringW, bool, bool)>(&::VROSC::CloudStateManager::DeleteSessionFromCloud)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x1831ce4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager*>::get(),
                        "DeleteSessionFromCloud",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::CloudStateManager.DownloadPreview
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::CloudStateManager::*)(::StringW, ::StringW, bool, bool)>(&::VROSC::CloudStateManager::DownloadPreview)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1831edc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager*>::get(),
                        "DownloadPreview",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::CloudStateManager.CoDeleteSession
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::VROSC::CloudStateManager::*)(::StringW, bool, bool)>(&::VROSC::CloudStateManager::CoDeleteSession)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1831e4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager*>::get(),
                        "CoDeleteSession",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::CloudStateManager._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::CloudStateManager::*)()>(&::VROSC::CloudStateManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18323d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::VROSC::CloudStateManager_DownloadState& VROSC::CloudStateManager::__cordl_internal_get__currentDownloadState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentDownloadState;
}
constexpr ::VROSC::CloudStateManager_DownloadState const& VROSC::CloudStateManager::__cordl_internal_get__currentDownloadState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentDownloadState;
}
constexpr void VROSC::CloudStateManager::__cordl_internal_set__currentDownloadState(::VROSC::CloudStateManager_DownloadState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentDownloadState = value;
}
constexpr ::VROSC::CloudStateManager_UploadState& VROSC::CloudStateManager::__cordl_internal_get__currentUploadState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentUploadState;
}
constexpr ::VROSC::CloudStateManager_UploadState const& VROSC::CloudStateManager::__cordl_internal_get__currentUploadState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentUploadState;
}
constexpr void VROSC::CloudStateManager::__cordl_internal_set__currentUploadState(::VROSC::CloudStateManager_UploadState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentUploadState = value;
}
inline void VROSC::CloudStateManager::setStaticF_OnDownloadSessionFromCloudSuccess(::System::Action_1<::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::StringW>*, "OnDownloadSessionFromCloudSuccess", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager*>::get>(std::forward<::System::Action_1<::StringW>*>(value));
}
inline ::System::Action_1<::StringW>* VROSC::CloudStateManager::getStaticF_OnDownloadSessionFromCloudSuccess()  {
return ::cordl_internals::getStaticField<::System::Action_1<::StringW>*, "OnDownloadSessionFromCloudSuccess", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager*>::get>();
}
inline void VROSC::CloudStateManager::setStaticF_OnDownloadSessionFromCloudFailure(::System::Action_2<::StringW,::VROSC::Error>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<::StringW,::VROSC::Error>*, "OnDownloadSessionFromCloudFailure", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager*>::get>(std::forward<::System::Action_2<::StringW,::VROSC::Error>*>(value));
}
inline ::System::Action_2<::StringW,::VROSC::Error>* VROSC::CloudStateManager::getStaticF_OnDownloadSessionFromCloudFailure()  {
return ::cordl_internals::getStaticField<::System::Action_2<::StringW,::VROSC::Error>*, "OnDownloadSessionFromCloudFailure", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager*>::get>();
}
inline void VROSC::CloudStateManager::setStaticF_OnDownloadSessionFromCloudProgress(::System::Action_2<::StringW,float_t>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<::StringW,float_t>*, "OnDownloadSessionFromCloudProgress", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager*>::get>(std::forward<::System::Action_2<::StringW,float_t>*>(value));
}
inline ::System::Action_2<::StringW,float_t>* VROSC::CloudStateManager::getStaticF_OnDownloadSessionFromCloudProgress()  {
return ::cordl_internals::getStaticField<::System::Action_2<::StringW,float_t>*, "OnDownloadSessionFromCloudProgress", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager*>::get>();
}
inline void VROSC::CloudStateManager::setStaticF_OnUploadSessionToCloudSuccess(::System::Action_1<::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::StringW>*, "OnUploadSessionToCloudSuccess", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager*>::get>(std::forward<::System::Action_1<::StringW>*>(value));
}
inline ::System::Action_1<::StringW>* VROSC::CloudStateManager::getStaticF_OnUploadSessionToCloudSuccess()  {
return ::cordl_internals::getStaticField<::System::Action_1<::StringW>*, "OnUploadSessionToCloudSuccess", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager*>::get>();
}
inline void VROSC::CloudStateManager::setStaticF_OnUploadSessionToCloudFailure(::System::Action_2<::StringW,::VROSC::Error>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<::StringW,::VROSC::Error>*, "OnUploadSessionToCloudFailure", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager*>::get>(std::forward<::System::Action_2<::StringW,::VROSC::Error>*>(value));
}
inline ::System::Action_2<::StringW,::VROSC::Error>* VROSC::CloudStateManager::getStaticF_OnUploadSessionToCloudFailure()  {
return ::cordl_internals::getStaticField<::System::Action_2<::StringW,::VROSC::Error>*, "OnUploadSessionToCloudFailure", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager*>::get>();
}
inline void VROSC::CloudStateManager::setStaticF_OnUploadSessionToCloudProgress(::System::Action_2<::StringW,float_t>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<::StringW,float_t>*, "OnUploadSessionToCloudProgress", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager*>::get>(std::forward<::System::Action_2<::StringW,float_t>*>(value));
}
inline ::System::Action_2<::StringW,float_t>* VROSC::CloudStateManager::getStaticF_OnUploadSessionToCloudProgress()  {
return ::cordl_internals::getStaticField<::System::Action_2<::StringW,float_t>*, "OnUploadSessionToCloudProgress", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager*>::get>();
}
inline void VROSC::CloudStateManager::setStaticF_OnUploadSessionPreviewToCloudProgress(::System::Action_2<::StringW,float_t>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<::StringW,float_t>*, "OnUploadSessionPreviewToCloudProgress", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager*>::get>(std::forward<::System::Action_2<::StringW,float_t>*>(value));
}
inline ::System::Action_2<::StringW,float_t>* VROSC::CloudStateManager::getStaticF_OnUploadSessionPreviewToCloudProgress()  {
return ::cordl_internals::getStaticField<::System::Action_2<::StringW,float_t>*, "OnUploadSessionPreviewToCloudProgress", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager*>::get>();
}
inline void VROSC::CloudStateManager::setStaticF_OnDeleteSessionFromCloudSuccess(::System::Action_1<::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::StringW>*, "OnDeleteSessionFromCloudSuccess", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager*>::get>(std::forward<::System::Action_1<::StringW>*>(value));
}
inline ::System::Action_1<::StringW>* VROSC::CloudStateManager::getStaticF_OnDeleteSessionFromCloudSuccess()  {
return ::cordl_internals::getStaticField<::System::Action_1<::StringW>*, "OnDeleteSessionFromCloudSuccess", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager*>::get>();
}
inline void VROSC::CloudStateManager::setStaticF_OnDeleteSessionFromCloudFailure(::System::Action_2<::StringW,::VROSC::Error>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<::StringW,::VROSC::Error>*, "OnDeleteSessionFromCloudFailure", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager*>::get>(std::forward<::System::Action_2<::StringW,::VROSC::Error>*>(value));
}
inline ::System::Action_2<::StringW,::VROSC::Error>* VROSC::CloudStateManager::getStaticF_OnDeleteSessionFromCloudFailure()  {
return ::cordl_internals::getStaticField<::System::Action_2<::StringW,::VROSC::Error>*, "OnDeleteSessionFromCloudFailure", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager*>::get>();
}
inline void VROSC::CloudStateManager::setStaticF_OnDownloadPreviewSuccess(::System::Action_2<::StringW,bool>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<::StringW,bool>*, "OnDownloadPreviewSuccess", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager*>::get>(std::forward<::System::Action_2<::StringW,bool>*>(value));
}
inline ::System::Action_2<::StringW,bool>* VROSC::CloudStateManager::getStaticF_OnDownloadPreviewSuccess()  {
return ::cordl_internals::getStaticField<::System::Action_2<::StringW,bool>*, "OnDownloadPreviewSuccess", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager*>::get>();
}
inline void VROSC::CloudStateManager::setStaticF_OnDownloadPreviewFailure(::System::Action_2<::StringW,::VROSC::Error>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<::StringW,::VROSC::Error>*, "OnDownloadPreviewFailure", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager*>::get>(std::forward<::System::Action_2<::StringW,::VROSC::Error>*>(value));
}
inline ::System::Action_2<::StringW,::VROSC::Error>* VROSC::CloudStateManager::getStaticF_OnDownloadPreviewFailure()  {
return ::cordl_internals::getStaticField<::System::Action_2<::StringW,::VROSC::Error>*, "OnDownloadPreviewFailure", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager*>::get>();
}
inline void VROSC::CloudStateManager::setStaticF_OnDownloadPreviewProgress(::System::Action_2<::StringW,float_t>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<::StringW,float_t>*, "OnDownloadPreviewProgress", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager*>::get>(std::forward<::System::Action_2<::StringW,float_t>*>(value));
}
inline ::System::Action_2<::StringW,float_t>* VROSC::CloudStateManager::getStaticF_OnDownloadPreviewProgress()  {
return ::cordl_internals::getStaticField<::System::Action_2<::StringW,float_t>*, "OnDownloadPreviewProgress", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager*>::get>();
}
inline void VROSC::CloudStateManager::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::CloudStateManager::DownloadSessionFromCloud(::StringW  sessionName, ::StringW  userId, bool  isCommunity)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager*>::get(),
                        "DownloadSessionFromCloud",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sessionName, userId, isCommunity);
}
inline ::System::Collections::IEnumerator* VROSC::CloudStateManager::CoDownloadSession(::StringW  sessionName, ::StringW  userId, bool  isCommunity)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager*>::get(),
                        "CoDownloadSession",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method, sessionName, userId, isCommunity);
}
inline void VROSC::CloudStateManager::UploadSessionToCloud(::StringW  sessionName, bool  isCommunity, bool  hasPreview)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager*>::get(),
                        "UploadSessionToCloud",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sessionName, isCommunity, hasPreview);
}
inline ::System::Collections::IEnumerator* VROSC::CloudStateManager::CoUploadSession(::StringW  sessionName, bool  isCommunity, bool  hasPreview)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager*>::get(),
                        "CoUploadSession",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method, sessionName, isCommunity, hasPreview);
}
inline void VROSC::CloudStateManager::DeleteSessionFromCloud(::StringW  sessionName, bool  isCommunity, bool  isOgg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager*>::get(),
                        "DeleteSessionFromCloud",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sessionName, isCommunity, isOgg);
}
inline void VROSC::CloudStateManager::DownloadPreview(::StringW  sessionName, ::StringW  userId, bool  isCommunity, bool  isOgg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager*>::get(),
                        "DownloadPreview",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sessionName, userId, isCommunity, isOgg);
}
inline ::System::Collections::IEnumerator* VROSC::CloudStateManager::CoDeleteSession(::StringW  sessionName, bool  isCommunity, bool  isOgg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager*>::get(),
                        "CoDeleteSession",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method, sessionName, isCommunity, isOgg);
}
inline void VROSC::CloudStateManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CloudStateManager*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::CloudStateManager* VROSC::CloudStateManager::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::CloudStateManager*>());
}
// Ctor Parameters []
constexpr ::VROSC::CloudStateManager::CloudStateManager()   {
}
