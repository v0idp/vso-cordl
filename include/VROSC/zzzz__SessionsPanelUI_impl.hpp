#pragma once
// IWYU pragma private; include "VROSC/SessionsPanelUI.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/zzzz__SessionsSearchHelper_impl.hpp"
#include "VROSC/zzzz__SessionsPanelUI_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "TMPro/zzzz__TextMeshPro_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "VROSC/zzzz__Error_def.hpp"
#include "VROSC/zzzz__SessionItemData_def.hpp"
#include "VROSC/zzzz__SessionUIData_def.hpp"
#include "VROSC/zzzz__SessionsItemsContainer_def.hpp"
#include "VROSC/zzzz__SessionsLibraryPreviewPlayer_def.hpp"
#include "VROSC/zzzz__SessionsSearchBar_def.hpp"
#include "VROSC/zzzz__SessionsSearchHelper_def.hpp"
//  Writing Method size for method: ::VROSC::SessionsPanelUI.Awake
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionsPanelUI::*)()>(&::VROSC::SessionsPanelUI::Awake)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x174b464;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsPanelUI*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionsPanelUI.OnEnable
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionsPanelUI::*)()>(&::VROSC::SessionsPanelUI::OnEnable)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x174b598;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsPanelUI*>::get(),
                        "OnEnable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionsPanelUI.OnDisable
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionsPanelUI::*)()>(&::VROSC::SessionsPanelUI::OnDisable)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x174bee0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsPanelUI*>::get(),
                        "OnDisable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionsPanelUI.OnDestroy
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionsPanelUI::*)()>(&::VROSC::SessionsPanelUI::OnDestroy)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x174e334;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsPanelUI*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionsPanelUI.Setup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionsPanelUI::*)()>(&::VROSC::SessionsPanelUI::Setup)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x174e318;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsPanelUI*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionsPanelUI.Refresh
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionsPanelUI::*)()>(&::VROSC::SessionsPanelUI::Refresh)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x174e4ac;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsPanelUI*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsPanelUI*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionsPanelUI.AddSessionList
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionsPanelUI::*)(::System::Collections::Generic::List_1<::VROSC::SessionUIData*>*, bool)>(&::VROSC::SessionsPanelUI::AddSessionList)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x174bbd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsPanelUI*>::get(),
                        "AddSessionList",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::VROSC::SessionUIData*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionsPanelUI.AddSession
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionsPanelUI::*)(::StringW, ::VROSC::SessionUIData*, bool)>(&::VROSC::SessionsPanelUI::AddSession)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x174e4b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsPanelUI*>::get(),
                        "AddSession",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::SessionUIData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionsPanelUI.HasSession
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::SessionsPanelUI::*)(::StringW)>(&::VROSC::SessionsPanelUI::HasSession)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x174e4d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsPanelUI*>::get(),
                        "HasSession",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionsPanelUI.RemoveSession
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionsPanelUI::*)(::StringW)>(&::VROSC::SessionsPanelUI::RemoveSession)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x174e4ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsPanelUI*>::get(),
                        "RemoveSession",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionsPanelUI.UpdateSearchBar
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionsPanelUI::*)()>(&::VROSC::SessionsPanelUI::UpdateSearchBar)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x174e580;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsPanelUI*>::get(),
                        "UpdateSearchBar",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionsPanelUI.OrderBy
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionsPanelUI::*)(::VROSC::SessionsSearchHelper_OrderingType)>(&::VROSC::SessionsPanelUI::OrderBy)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x174e5e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsPanelUI*>::get(),
                        "OrderBy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::SessionsSearchHelper_OrderingType>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionsPanelUI.FilterBy
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionsPanelUI::*)(::VROSC::SessionsSearchHelper_FilteringType)>(&::VROSC::SessionsPanelUI::FilterBy)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x174e68c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsPanelUI*>::get(),
                        "FilterBy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::SessionsSearchHelper_FilteringType>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionsPanelUI.SearchBy
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionsPanelUI::*)(::StringW)>(&::VROSC::SessionsPanelUI::SearchBy)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x174e778;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsPanelUI*>::get(),
                        "SearchBy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionsPanelUI.SelectSession
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionsPanelUI::*)(::VROSC::SessionItemData*)>(&::VROSC::SessionsPanelUI::SelectSession)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x174e800;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsPanelUI*>::get(),
                        "SelectSession",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::SessionItemData*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionsPanelUI.SetEnabled
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionsPanelUI::*)(bool)>(&::VROSC::SessionsPanelUI::SetEnabled)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x174e81c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsPanelUI*>::get(),
                        "SetEnabled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionsPanelUI.Clear
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionsPanelUI::*)()>(&::VROSC::SessionsPanelUI::Clear)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x174e880;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsPanelUI*>::get(),
                        "Clear",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionsPanelUI.ShowError
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionsPanelUI::*)(::VROSC::Error)>(&::VROSC::SessionsPanelUI::ShowError)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x174e914;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsPanelUI*>::get(),
                        "ShowError",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Error>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionsPanelUI.ClearErrorMessage
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionsPanelUI::*)()>(&::VROSC::SessionsPanelUI::ClearErrorMessage)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x174e984;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsPanelUI*>::get(),
                        "ClearErrorMessage",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionsPanelUI.UpdateMessage
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionsPanelUI::*)(::StringW)>(&::VROSC::SessionsPanelUI::UpdateMessage)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x174b934;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsPanelUI*>::get(),
                        "UpdateMessage",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionsPanelUI.UpdateErrorMessage
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionsPanelUI::*)(::StringW)>(&::VROSC::SessionsPanelUI::UpdateErrorMessage)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x174c16c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsPanelUI*>::get(),
                        "UpdateErrorMessage",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionsPanelUI.SessionSelected
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionsPanelUI::*)(::VROSC::SessionItemData*)>(&::VROSC::SessionsPanelUI::SessionSelected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x174e9cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsPanelUI*>::get(),
                        "SessionSelected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::SessionItemData*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionsPanelUI.UserLoggedOut
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionsPanelUI::*)()>(&::VROSC::SessionsPanelUI::UserLoggedOut)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x174ea18;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsPanelUI*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsPanelUI*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionsPanelUI._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionsPanelUI::*)()>(&::VROSC::SessionsPanelUI::_ctor)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x174c498;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsPanelUI*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::SessionsItemsContainer>& VROSC::SessionsPanelUI::__cordl_internal_get__sessionsItemsContainer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sessionsItemsContainer;
}
constexpr ::UnityW<::VROSC::SessionsItemsContainer> const& VROSC::SessionsPanelUI::__cordl_internal_get__sessionsItemsContainer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sessionsItemsContainer;
}
constexpr void VROSC::SessionsPanelUI::__cordl_internal_set__sessionsItemsContainer(::UnityW<::VROSC::SessionsItemsContainer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sessionsItemsContainer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::TMPro::TextMeshPro>& VROSC::SessionsPanelUI::__cordl_internal_get__messageText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____messageText;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& VROSC::SessionsPanelUI::__cordl_internal_get__messageText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____messageText;
}
constexpr void VROSC::SessionsPanelUI::__cordl_internal_set__messageText(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____messageText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::TMPro::TextMeshPro>& VROSC::SessionsPanelUI::__cordl_internal_get__errorText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____errorText;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& VROSC::SessionsPanelUI::__cordl_internal_get__errorText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____errorText;
}
constexpr void VROSC::SessionsPanelUI::__cordl_internal_set__errorText(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____errorText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::SessionsLibraryPreviewPlayer>& VROSC::SessionsPanelUI::__cordl_internal_get__previewPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previewPlayer;
}
constexpr ::UnityW<::VROSC::SessionsLibraryPreviewPlayer> const& VROSC::SessionsPanelUI::__cordl_internal_get__previewPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previewPlayer;
}
constexpr void VROSC::SessionsPanelUI::__cordl_internal_set__previewPlayer(::UnityW<::VROSC::SessionsLibraryPreviewPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____previewPlayer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& VROSC::SessionsPanelUI::__cordl_internal_get__listView()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____listView;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& VROSC::SessionsPanelUI::__cordl_internal_get__listView() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____listView;
}
constexpr void VROSC::SessionsPanelUI::__cordl_internal_set__listView(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____listView)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::SessionsSearchBar>& VROSC::SessionsPanelUI::__cordl_internal_get__searchBar()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____searchBar;
}
constexpr ::UnityW<::VROSC::SessionsSearchBar> const& VROSC::SessionsPanelUI::__cordl_internal_get__searchBar() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____searchBar;
}
constexpr void VROSC::SessionsPanelUI::__cordl_internal_set__searchBar(::UnityW<::VROSC::SessionsSearchBar>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____searchBar)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& VROSC::SessionsPanelUI::__cordl_internal_get__noSessionsMessage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____noSessionsMessage;
}
constexpr ::StringW const& VROSC::SessionsPanelUI::__cordl_internal_get__noSessionsMessage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____noSessionsMessage;
}
constexpr void VROSC::SessionsPanelUI::__cordl_internal_set__noSessionsMessage(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____noSessionsMessage)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& VROSC::SessionsPanelUI::__cordl_internal_get__disabledMessage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disabledMessage;
}
constexpr ::StringW const& VROSC::SessionsPanelUI::__cordl_internal_get__disabledMessage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disabledMessage;
}
constexpr void VROSC::SessionsPanelUI::__cordl_internal_set__disabledMessage(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____disabledMessage)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& VROSC::SessionsPanelUI::__cordl_internal_get__loadingMessage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loadingMessage;
}
constexpr ::StringW const& VROSC::SessionsPanelUI::__cordl_internal_get__loadingMessage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loadingMessage;
}
constexpr void VROSC::SessionsPanelUI::__cordl_internal_set__loadingMessage(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____loadingMessage)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::VROSC::SessionsSearchHelper_OrderingType>*& VROSC::SessionsPanelUI::__cordl_internal_get__orderingOptions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____orderingOptions;
}
constexpr ::System::Collections::Generic::List_1<::VROSC::SessionsSearchHelper_OrderingType>* const& VROSC::SessionsPanelUI::__cordl_internal_get__orderingOptions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____orderingOptions;
}
constexpr void VROSC::SessionsPanelUI::__cordl_internal_set__orderingOptions(::System::Collections::Generic::List_1<::VROSC::SessionsSearchHelper_OrderingType>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____orderingOptions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::VROSC::SessionsSearchHelper_FilteringType>*& VROSC::SessionsPanelUI::__cordl_internal_get__filteringOptions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____filteringOptions;
}
constexpr ::System::Collections::Generic::List_1<::VROSC::SessionsSearchHelper_FilteringType>* const& VROSC::SessionsPanelUI::__cordl_internal_get__filteringOptions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____filteringOptions;
}
constexpr void VROSC::SessionsPanelUI::__cordl_internal_set__filteringOptions(::System::Collections::Generic::List_1<::VROSC::SessionsSearchHelper_FilteringType>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____filteringOptions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::SessionsSearchHelper_OrderingType& VROSC::SessionsPanelUI::__cordl_internal_get__defaultOrdering()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____defaultOrdering;
}
constexpr ::VROSC::SessionsSearchHelper_OrderingType const& VROSC::SessionsPanelUI::__cordl_internal_get__defaultOrdering() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____defaultOrdering;
}
constexpr void VROSC::SessionsPanelUI::__cordl_internal_set__defaultOrdering(::VROSC::SessionsSearchHelper_OrderingType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____defaultOrdering = value;
}
constexpr ::VROSC::SessionsSearchHelper_FilteringType& VROSC::SessionsPanelUI::__cordl_internal_get__defaultFiltering()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____defaultFiltering;
}
constexpr ::VROSC::SessionsSearchHelper_FilteringType const& VROSC::SessionsPanelUI::__cordl_internal_get__defaultFiltering() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____defaultFiltering;
}
constexpr void VROSC::SessionsPanelUI::__cordl_internal_set__defaultFiltering(::VROSC::SessionsSearchHelper_FilteringType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____defaultFiltering = value;
}
constexpr ::System::Action_1<::VROSC::SessionItemData*>*& VROSC::SessionsPanelUI::__cordl_internal_get_OnSessionSelected()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSessionSelected;
}
constexpr ::System::Action_1<::VROSC::SessionItemData*>* const& VROSC::SessionsPanelUI::__cordl_internal_get_OnSessionSelected() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSessionSelected;
}
constexpr void VROSC::SessionsPanelUI::__cordl_internal_set_OnSessionSelected(::System::Action_1<::VROSC::SessionItemData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnSessionSelected)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::SessionsSearchHelper_OrderingType& VROSC::SessionsPanelUI::__cordl_internal_get__currentOrdering()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentOrdering;
}
constexpr ::VROSC::SessionsSearchHelper_OrderingType const& VROSC::SessionsPanelUI::__cordl_internal_get__currentOrdering() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentOrdering;
}
constexpr void VROSC::SessionsPanelUI::__cordl_internal_set__currentOrdering(::VROSC::SessionsSearchHelper_OrderingType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentOrdering = value;
}
constexpr ::VROSC::SessionsSearchHelper_FilteringType& VROSC::SessionsPanelUI::__cordl_internal_get__currentFiltering()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentFiltering;
}
constexpr ::VROSC::SessionsSearchHelper_FilteringType const& VROSC::SessionsPanelUI::__cordl_internal_get__currentFiltering() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentFiltering;
}
constexpr void VROSC::SessionsPanelUI::__cordl_internal_set__currentFiltering(::VROSC::SessionsSearchHelper_FilteringType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentFiltering = value;
}
constexpr ::StringW& VROSC::SessionsPanelUI::__cordl_internal_get__currentSearchText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentSearchText;
}
constexpr ::StringW const& VROSC::SessionsPanelUI::__cordl_internal_get__currentSearchText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentSearchText;
}
constexpr void VROSC::SessionsPanelUI::__cordl_internal_set__currentSearchText(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____currentSearchText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& VROSC::SessionsPanelUI::__cordl_internal_get__isEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isEnabled;
}
constexpr bool const& VROSC::SessionsPanelUI::__cordl_internal_get__isEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isEnabled;
}
constexpr void VROSC::SessionsPanelUI::__cordl_internal_set__isEnabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isEnabled = value;
}
inline void VROSC::SessionsPanelUI::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsPanelUI*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SessionsPanelUI::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsPanelUI*>::get(),
                        "OnEnable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SessionsPanelUI::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsPanelUI*>::get(),
                        "OnDisable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SessionsPanelUI::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsPanelUI*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SessionsPanelUI::Setup()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsPanelUI*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SessionsPanelUI::Refresh()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsPanelUI*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SessionsPanelUI::AddSessionList(::System::Collections::Generic::List_1<::VROSC::SessionUIData*>*  sessionsUIDatas, bool  clear)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsPanelUI*>::get(),
                        "AddSessionList",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::VROSC::SessionUIData*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sessionsUIDatas, clear);
}
inline void VROSC::SessionsPanelUI::AddSession(::StringW  sessionId, ::VROSC::SessionUIData*  sessionUIData, bool  isNewSave)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsPanelUI*>::get(),
                        "AddSession",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::SessionUIData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sessionId, sessionUIData, isNewSave);
}
inline bool VROSC::SessionsPanelUI::HasSession(::StringW  sessionId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsPanelUI*>::get(),
                        "HasSession",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, sessionId);
}
inline void VROSC::SessionsPanelUI::RemoveSession(::StringW  sessionId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsPanelUI*>::get(),
                        "RemoveSession",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sessionId);
}
inline void VROSC::SessionsPanelUI::UpdateSearchBar()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsPanelUI*>::get(),
                        "UpdateSearchBar",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SessionsPanelUI::OrderBy(::VROSC::SessionsSearchHelper_OrderingType  orderingType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsPanelUI*>::get(),
                        "OrderBy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::SessionsSearchHelper_OrderingType>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, orderingType);
}
inline void VROSC::SessionsPanelUI::FilterBy(::VROSC::SessionsSearchHelper_FilteringType  filteringType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsPanelUI*>::get(),
                        "FilterBy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::SessionsSearchHelper_FilteringType>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, filteringType);
}
inline void VROSC::SessionsPanelUI::SearchBy(::StringW  text)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsPanelUI*>::get(),
                        "SearchBy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, text);
}
inline void VROSC::SessionsPanelUI::SelectSession(::VROSC::SessionItemData*  sessionItemData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsPanelUI*>::get(),
                        "SelectSession",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::SessionItemData*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sessionItemData);
}
inline void VROSC::SessionsPanelUI::SetEnabled(bool  enabled)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsPanelUI*>::get(),
                        "SetEnabled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, enabled);
}
inline void VROSC::SessionsPanelUI::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsPanelUI*>::get(),
                        "Clear",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SessionsPanelUI::ShowError(::VROSC::Error  error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsPanelUI*>::get(),
                        "ShowError",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Error>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, error);
}
inline void VROSC::SessionsPanelUI::ClearErrorMessage()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsPanelUI*>::get(),
                        "ClearErrorMessage",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SessionsPanelUI::UpdateMessage(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsPanelUI*>::get(),
                        "UpdateMessage",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
inline void VROSC::SessionsPanelUI::UpdateErrorMessage(::StringW  errorMessage)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsPanelUI*>::get(),
                        "UpdateErrorMessage",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, errorMessage);
}
inline void VROSC::SessionsPanelUI::SessionSelected(::VROSC::SessionItemData*  item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsPanelUI*>::get(),
                        "SessionSelected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::SessionItemData*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
inline void VROSC::SessionsPanelUI::UserLoggedOut()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsPanelUI*>::get(),
                    5
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SessionsPanelUI::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionsPanelUI*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::SessionsPanelUI* VROSC::SessionsPanelUI::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::SessionsPanelUI*>());
}
// Ctor Parameters []
constexpr ::VROSC::SessionsPanelUI::SessionsPanelUI()   {
}
