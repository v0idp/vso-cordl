#pragma once
// IWYU pragma private; include "VROSC/VideosPanelUI.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/zzzz__VideosPanelUI_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequest_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "VROSC/zzzz__PaginatedListDataHolder_def.hpp"
#include "VROSC/zzzz__PaginatedList_def.hpp"
#include "VROSC/zzzz__VideosPanelUI_def.hpp"
//  Writing Method size for method: ::VROSC::VideosPanelUI__Awake_d__6.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::VideosPanelUI__Awake_d__6::*)()>(&::VROSC::VideosPanelUI__Awake_d__6::MoveNext)> {
  constexpr static std::size_t size = 0x8bc;
  constexpr static std::size_t addrs = 0x177caa4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VideosPanelUI__Awake_d__6>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::VideosPanelUI__Awake_d__6.SetStateMachine
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::VideosPanelUI__Awake_d__6::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::VROSC::VideosPanelUI__Awake_d__6::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x177d360;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VideosPanelUI__Awake_d__6>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void VROSC::VideosPanelUI__Awake_d__6::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VideosPanelUI__Awake_d__6>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::VideosPanelUI__Awake_d__6::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VideosPanelUI__Awake_d__6>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  VROSC::VideosPanelUI__Awake_d__6::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* VROSC::VideosPanelUI__Awake_d__6::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::VROSC::VideosPanelUI>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_request_5__2", ty: "::UnityEngine::Networking::UnityWebRequest*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::VideosPanelUI__Awake_d__6::VideosPanelUI__Awake_d__6(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::VROSC::VideosPanelUI>  __4__this, ::UnityEngine::Networking::UnityWebRequest*  _request_5__2, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->_request_5__2 = _request_5__2;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::VROSC::VideosPanelUI__Awake_d__6::VideosPanelUI__Awake_d__6()   {
}
//  Writing Method size for method: ::VROSC::VideosPanelUI.Awake
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::VideosPanelUI::*)()>(&::VROSC::VideosPanelUI::Awake)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x177c484;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VideosPanelUI*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::VideosPanelUI.OnDestroy
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::VideosPanelUI::*)()>(&::VROSC::VideosPanelUI::OnDestroy)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x177c510;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VideosPanelUI*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::VideosPanelUI.VideoButtonPressed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::VideosPanelUI::*)(::VROSC::PaginatedListDataHolder*)>(&::VROSC::VideosPanelUI::VideoButtonPressed)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x177c5e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VideosPanelUI*>::get(),
                        "VideoButtonPressed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::PaginatedListDataHolder*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::VideosPanelUI.VideoPlayerClosed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::VideosPanelUI::*)()>(&::VROSC::VideosPanelUI::VideoPlayerClosed)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x177c6a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VideosPanelUI*>::get(),
                        "VideoPlayerClosed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::VideosPanelUI.IsVersionCompatible
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::VideosPanelUI::*)(::StringW, ::StringW)>(&::VROSC::VideosPanelUI::IsVersionCompatible)> {
  constexpr static std::size_t size = 0x364;
  constexpr static std::size_t addrs = 0x177c6c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VideosPanelUI*>::get(),
                        "IsVersionCompatible",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::VideosPanelUI._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::VideosPanelUI::*)()>(&::VROSC::VideosPanelUI::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x177ca28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VideosPanelUI*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& VROSC::VideosPanelUI::__cordl_internal_get__loadingIcon()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loadingIcon;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& VROSC::VideosPanelUI::__cordl_internal_get__loadingIcon() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loadingIcon;
}
constexpr void VROSC::VideosPanelUI::__cordl_internal_set__loadingIcon(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____loadingIcon)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& VROSC::VideosPanelUI::__cordl_internal_get__noVideosErrorLabel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____noVideosErrorLabel;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& VROSC::VideosPanelUI::__cordl_internal_get__noVideosErrorLabel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____noVideosErrorLabel;
}
constexpr void VROSC::VideosPanelUI::__cordl_internal_set__noVideosErrorLabel(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____noVideosErrorLabel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& VROSC::VideosPanelUI::__cordl_internal_get__connectionErrorLabel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____connectionErrorLabel;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& VROSC::VideosPanelUI::__cordl_internal_get__connectionErrorLabel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____connectionErrorLabel;
}
constexpr void VROSC::VideosPanelUI::__cordl_internal_set__connectionErrorLabel(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____connectionErrorLabel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::PaginatedList>& VROSC::VideosPanelUI::__cordl_internal_get__paginatedList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____paginatedList;
}
constexpr ::UnityW<::VROSC::PaginatedList> const& VROSC::VideosPanelUI::__cordl_internal_get__paginatedList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____paginatedList;
}
constexpr void VROSC::VideosPanelUI::__cordl_internal_set__paginatedList(::UnityW<::VROSC::PaginatedList>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____paginatedList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::VROSC::PaginatedListDataHolder*>*& VROSC::VideosPanelUI::__cordl_internal_get__dataList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dataList;
}
constexpr ::System::Collections::Generic::List_1<::VROSC::PaginatedListDataHolder*>* const& VROSC::VideosPanelUI::__cordl_internal_get__dataList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dataList;
}
constexpr void VROSC::VideosPanelUI::__cordl_internal_set__dataList(::System::Collections::Generic::List_1<::VROSC::PaginatedListDataHolder*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____dataList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::PaginatedListDataHolder*& VROSC::VideosPanelUI::__cordl_internal_get__selectedDataHolder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selectedDataHolder;
}
constexpr ::VROSC::PaginatedListDataHolder* const& VROSC::VideosPanelUI::__cordl_internal_get__selectedDataHolder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selectedDataHolder;
}
constexpr void VROSC::VideosPanelUI::__cordl_internal_set__selectedDataHolder(::VROSC::PaginatedListDataHolder*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____selectedDataHolder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::VideosPanelUI::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VideosPanelUI*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::VideosPanelUI::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VideosPanelUI*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::VideosPanelUI::VideoButtonPressed(::VROSC::PaginatedListDataHolder*  dataHolder)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VideosPanelUI*>::get(),
                        "VideoButtonPressed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::PaginatedListDataHolder*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dataHolder);
}
inline void VROSC::VideosPanelUI::VideoPlayerClosed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VideosPanelUI*>::get(),
                        "VideoPlayerClosed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool VROSC::VideosPanelUI::IsVersionCompatible(::StringW  requiredVersion, ::StringW  versionToCheck)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VideosPanelUI*>::get(),
                        "IsVersionCompatible",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, requiredVersion, versionToCheck);
}
inline void VROSC::VideosPanelUI::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VideosPanelUI*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::VideosPanelUI* VROSC::VideosPanelUI::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::VideosPanelUI*>());
}
// Ctor Parameters []
constexpr ::VROSC::VideosPanelUI::VideosPanelUI()   {
}
