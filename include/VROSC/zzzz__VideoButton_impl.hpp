#pragma once
// IWYU pragma private; include "VROSC/VideoButton.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "VROSC/zzzz__PaginatedListItemUI_impl.hpp"
#include "VROSC/zzzz__VideoButton_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "TMPro/zzzz__TextMeshPro_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequest_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "VROSC/zzzz__InputDevice_def.hpp"
#include "VROSC/zzzz__PaginatedListDataHolder_def.hpp"
#include "VROSC/zzzz__PaginatedList_def.hpp"
#include "VROSC/zzzz__VideoButton_def.hpp"
#include "VROSC/zzzz__VideoInfo_def.hpp"
//  Writing Method size for method: ::VROSC::VideoButton__DownloadThumbnail_d__5.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::VideoButton__DownloadThumbnail_d__5::*)()>(&::VROSC::VideoButton__DownloadThumbnail_d__5::MoveNext)> {
  constexpr static std::size_t size = 0x550;
  constexpr static std::size_t addrs = 0x177bf28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VideoButton__DownloadThumbnail_d__5>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::VideoButton__DownloadThumbnail_d__5.SetStateMachine
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::VideoButton__DownloadThumbnail_d__5::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::VROSC::VideoButton__DownloadThumbnail_d__5::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x177c478;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VideoButton__DownloadThumbnail_d__5>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void VROSC::VideoButton__DownloadThumbnail_d__5::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VideoButton__DownloadThumbnail_d__5>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::VideoButton__DownloadThumbnail_d__5::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VideoButton__DownloadThumbnail_d__5>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  VROSC::VideoButton__DownloadThumbnail_d__5::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* VROSC::VideoButton__DownloadThumbnail_d__5::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "videoInfo", ty: "::VROSC::VideoInfo*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::VROSC::VideoButton>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_request_5__2", ty: "::UnityEngine::Networking::UnityWebRequest*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::VideoButton__DownloadThumbnail_d__5::VideoButton__DownloadThumbnail_d__5(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::VROSC::VideoInfo*  videoInfo, ::UnityW<::VROSC::VideoButton>  __4__this, ::UnityEngine::Networking::UnityWebRequest*  _request_5__2, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->videoInfo = videoInfo;
this->__4__this = __4__this;
this->_request_5__2 = _request_5__2;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::VROSC::VideoButton__DownloadThumbnail_d__5::VideoButton__DownloadThumbnail_d__5()   {
}
//  Writing Method size for method: ::VROSC::VideoButton.Setup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::VideoButton::*)(::VROSC::PaginatedList*)>(&::VROSC::VideoButton::Setup)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x177bc30;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VideoButton*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VideoButton*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::VideoButton.SetNewData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::VideoButton::*)(::VROSC::PaginatedListDataHolder*)>(&::VROSC::VideoButton::SetNewData)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x177bd24;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VideoButton*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VideoButton*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::VideoButton.DownloadThumbnail
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::VideoButton::*)(::VROSC::VideoInfo*)>(&::VROSC::VideoButton::DownloadThumbnail)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x177be30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VideoButton*>::get(),
                        "DownloadThumbnail",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::VideoInfo*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::VideoButton.SetThumbnail
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::VideoButton::*)(::UnityEngine::Texture*)>(&::VROSC::VideoButton::SetThumbnail)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x177becc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VideoButton*>::get(),
                        "SetThumbnail",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::VideoButton.Toggled
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::VideoButton::*)(::VROSC::InputDevice*, bool)>(&::VROSC::VideoButton::Toggled)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x177befc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VideoButton*>::get(),
                        "Toggled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::VideoButton._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::VideoButton::*)()>(&::VROSC::VideoButton::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x177bf20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VideoButton*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::MeshRenderer>& VROSC::VideoButton::__cordl_internal_get__thumbnailMesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____thumbnailMesh;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& VROSC::VideoButton::__cordl_internal_get__thumbnailMesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____thumbnailMesh;
}
constexpr void VROSC::VideoButton::__cordl_internal_set__thumbnailMesh(::UnityW<::UnityEngine::MeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____thumbnailMesh)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::TMPro::TextMeshPro>& VROSC::VideoButton::__cordl_internal_get__titleUI()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____titleUI;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& VROSC::VideoButton::__cordl_internal_get__titleUI() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____titleUI;
}
constexpr void VROSC::VideoButton::__cordl_internal_set__titleUI(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____titleUI)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& VROSC::VideoButton::__cordl_internal_get__playIcon()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playIcon;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& VROSC::VideoButton::__cordl_internal_get__playIcon() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playIcon;
}
constexpr void VROSC::VideoButton::__cordl_internal_set__playIcon(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playIcon)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::VideoButton::Setup(::VROSC::PaginatedList*  paginatedList)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VideoButton*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, paginatedList);
}
inline void VROSC::VideoButton::SetNewData(::VROSC::PaginatedListDataHolder*  dataholder)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VideoButton*>::get(),
                    5
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dataholder);
}
inline void VROSC::VideoButton::DownloadThumbnail(::VROSC::VideoInfo*  videoInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VideoButton*>::get(),
                        "DownloadThumbnail",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::VideoInfo*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, videoInfo);
}
inline void VROSC::VideoButton::SetThumbnail(::UnityEngine::Texture*  thumbnail)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VideoButton*>::get(),
                        "SetThumbnail",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, thumbnail);
}
inline void VROSC::VideoButton::Toggled(::VROSC::InputDevice*  inputDevice, bool  toggledOn)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VideoButton*>::get(),
                        "Toggled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inputDevice, toggledOn);
}
inline void VROSC::VideoButton::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VideoButton*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::VideoButton* VROSC::VideoButton::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::VideoButton*>());
}
// Ctor Parameters []
constexpr ::VROSC::VideoButton::VideoButton()   {
}
