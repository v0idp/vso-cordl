#pragma once
// IWYU pragma private; include "VROSC/SessionInfoPopup.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/zzzz__SessionInfoPopup_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "TMPro/zzzz__TextMeshPro_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "VROSC/zzzz__ClickData_def.hpp"
#include "VROSC/zzzz__Error_def.hpp"
#include "VROSC/zzzz__InputDevice_def.hpp"
#include "VROSC/zzzz__SessionUIData_def.hpp"
#include "VROSC/zzzz__SessionsLibraryUI_def.hpp"
#include "VROSC/zzzz__UIButton_def.hpp"
#include "VROSC/zzzz__UIDataButton_def.hpp"
#include "VROSC/zzzz__UIToggle_def.hpp"
//  Writing Method size for method: ::VROSC::SessionInfoPopup.Awake
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionInfoPopup::*)()>(&::VROSC::SessionInfoPopup::Awake)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x1756608;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionInfoPopup*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionInfoPopup.OnDestroy
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionInfoPopup::*)()>(&::VROSC::SessionInfoPopup::OnDestroy)> {
  constexpr static std::size_t size = 0x34c;
  constexpr static std::size_t addrs = 0x1756828;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionInfoPopup*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionInfoPopup.Setup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionInfoPopup::*)(::VROSC::SessionsLibraryUI*)>(&::VROSC::SessionInfoPopup::Setup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1756b74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionInfoPopup*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::SessionsLibraryUI*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionInfoPopup.UpdateInfo
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionInfoPopup::*)(::VROSC::SessionUIData*)>(&::VROSC::SessionInfoPopup::UpdateInfo)> {
  constexpr static std::size_t size = 0x428;
  constexpr static std::size_t addrs = 0x1756b7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionInfoPopup*>::get(),
                        "UpdateInfo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::SessionUIData*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionInfoPopup.SetupContributorButtons
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionInfoPopup::*)(::System::Collections::Generic::List_1<::StringW>*)>(&::VROSC::SessionInfoPopup::SetupContributorButtons)> {
  constexpr static std::size_t size = 0x588;
  constexpr static std::size_t addrs = 0x1756fa4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionInfoPopup*>::get(),
                        "SetupContributorButtons",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionInfoPopup.SetupTagsButtons
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionInfoPopup::*)(::System::Collections::Generic::List_1<::StringW>*)>(&::VROSC::SessionInfoPopup::SetupTagsButtons)> {
  constexpr static std::size_t size = 0x38c;
  constexpr static std::size_t addrs = 0x175752c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionInfoPopup*>::get(),
                        "SetupTagsButtons",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionInfoPopup.ContributorButtonPressed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionInfoPopup::*)(::System::Object*)>(&::VROSC::SessionInfoPopup::ContributorButtonPressed)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x17578b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionInfoPopup*>::get(),
                        "ContributorButtonPressed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionInfoPopup.TagButtonPressed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionInfoPopup::*)(::System::Object*)>(&::VROSC::SessionInfoPopup::TagButtonPressed)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x175794c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionInfoPopup*>::get(),
                        "TagButtonPressed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionInfoPopup.UpVoteButtonToggled
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionInfoPopup::*)(::VROSC::InputDevice*, bool)>(&::VROSC::SessionInfoPopup::UpVoteButtonToggled)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x17579bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionInfoPopup*>::get(),
                        "UpVoteButtonToggled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionInfoPopup.FavoriteButtonToggled
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionInfoPopup::*)(::VROSC::InputDevice*, bool)>(&::VROSC::SessionInfoPopup::FavoriteButtonToggled)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x1757b68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionInfoPopup*>::get(),
                        "FavoriteButtonToggled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionInfoPopup.SetAsTemplateButtonClicked
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionInfoPopup::*)(::VROSC::ClickData*)>(&::VROSC::SessionInfoPopup::SetAsTemplateButtonClicked)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x1757d14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionInfoPopup*>::get(),
                        "SetAsTemplateButtonClicked",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::ClickData*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionInfoPopup.SaveTemplateSucceeded
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionInfoPopup::*)()>(&::VROSC::SessionInfoPopup::SaveTemplateSucceeded)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x1757fe4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionInfoPopup*>::get(),
                        "SaveTemplateSucceeded",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionInfoPopup.SaveTemplateFailed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionInfoPopup::*)(::VROSC::Error)>(&::VROSC::SessionInfoPopup::SaveTemplateFailed)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x1758238;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionInfoPopup*>::get(),
                        "SaveTemplateFailed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Error>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionInfoPopup._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionInfoPopup::*)()>(&::VROSC::SessionInfoPopup::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x175843c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionInfoPopup*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionInfoPopup._UpVoteButtonToggled_b__27_0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionInfoPopup::*)()>(&::VROSC::SessionInfoPopup::_UpVoteButtonToggled_b__27_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x17584d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionInfoPopup*>::get(),
                        "<UpVoteButtonToggled>b__27_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionInfoPopup._UpVoteButtonToggled_b__27_1
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionInfoPopup::*)(::VROSC::Error)>(&::VROSC::SessionInfoPopup::_UpVoteButtonToggled_b__27_1)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x17584f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionInfoPopup*>::get(),
                        "<UpVoteButtonToggled>b__27_1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Error>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionInfoPopup._UpVoteButtonToggled_b__27_2
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionInfoPopup::*)()>(&::VROSC::SessionInfoPopup::_UpVoteButtonToggled_b__27_2)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1758524;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionInfoPopup*>::get(),
                        "<UpVoteButtonToggled>b__27_2",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionInfoPopup._UpVoteButtonToggled_b__27_3
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionInfoPopup::*)(::VROSC::Error)>(&::VROSC::SessionInfoPopup::_UpVoteButtonToggled_b__27_3)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x1758544;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionInfoPopup*>::get(),
                        "<UpVoteButtonToggled>b__27_3",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Error>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionInfoPopup._FavoriteButtonToggled_b__28_0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionInfoPopup::*)()>(&::VROSC::SessionInfoPopup::_FavoriteButtonToggled_b__28_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1758570;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionInfoPopup*>::get(),
                        "<FavoriteButtonToggled>b__28_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionInfoPopup._FavoriteButtonToggled_b__28_1
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionInfoPopup::*)(::VROSC::Error)>(&::VROSC::SessionInfoPopup::_FavoriteButtonToggled_b__28_1)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x1758590;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionInfoPopup*>::get(),
                        "<FavoriteButtonToggled>b__28_1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Error>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionInfoPopup._FavoriteButtonToggled_b__28_2
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionInfoPopup::*)()>(&::VROSC::SessionInfoPopup::_FavoriteButtonToggled_b__28_2)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x17585bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionInfoPopup*>::get(),
                        "<FavoriteButtonToggled>b__28_2",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionInfoPopup._FavoriteButtonToggled_b__28_3
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionInfoPopup::*)(::VROSC::Error)>(&::VROSC::SessionInfoPopup::_FavoriteButtonToggled_b__28_3)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x17585dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionInfoPopup*>::get(),
                        "<FavoriteButtonToggled>b__28_3",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Error>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TextMeshPro>& VROSC::SessionInfoPopup::__cordl_internal_get__songNameText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____songNameText;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& VROSC::SessionInfoPopup::__cordl_internal_get__songNameText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____songNameText;
}
constexpr void VROSC::SessionInfoPopup::__cordl_internal_set__songNameText(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____songNameText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::TMPro::TextMeshPro>& VROSC::SessionInfoPopup::__cordl_internal_get__songDescriptionText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____songDescriptionText;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& VROSC::SessionInfoPopup::__cordl_internal_get__songDescriptionText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____songDescriptionText;
}
constexpr void VROSC::SessionInfoPopup::__cordl_internal_set__songDescriptionText(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____songDescriptionText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& VROSC::SessionInfoPopup::__cordl_internal_get__contributorsList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____contributorsList;
}
constexpr ::UnityW<::UnityEngine::Transform> const& VROSC::SessionInfoPopup::__cordl_internal_get__contributorsList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____contributorsList;
}
constexpr void VROSC::SessionInfoPopup::__cordl_internal_set__contributorsList(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____contributorsList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::UIDataButton>& VROSC::SessionInfoPopup::__cordl_internal_get__contributorButtonPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____contributorButtonPrefab;
}
constexpr ::UnityW<::VROSC::UIDataButton> const& VROSC::SessionInfoPopup::__cordl_internal_get__contributorButtonPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____contributorButtonPrefab;
}
constexpr void VROSC::SessionInfoPopup::__cordl_internal_set__contributorButtonPrefab(::UnityW<::VROSC::UIDataButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____contributorButtonPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& VROSC::SessionInfoPopup::__cordl_internal_get__tagsList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tagsList;
}
constexpr ::UnityW<::UnityEngine::Transform> const& VROSC::SessionInfoPopup::__cordl_internal_get__tagsList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tagsList;
}
constexpr void VROSC::SessionInfoPopup::__cordl_internal_set__tagsList(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____tagsList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::UIDataButton>& VROSC::SessionInfoPopup::__cordl_internal_get__tagButtonPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tagButtonPrefab;
}
constexpr ::UnityW<::VROSC::UIDataButton> const& VROSC::SessionInfoPopup::__cordl_internal_get__tagButtonPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tagButtonPrefab;
}
constexpr void VROSC::SessionInfoPopup::__cordl_internal_set__tagButtonPrefab(::UnityW<::VROSC::UIDataButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____tagButtonPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& VROSC::SessionInfoPopup::__cordl_internal_get__songRatingSection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____songRatingSection;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& VROSC::SessionInfoPopup::__cordl_internal_get__songRatingSection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____songRatingSection;
}
constexpr void VROSC::SessionInfoPopup::__cordl_internal_set__songRatingSection(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____songRatingSection)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::TMPro::TextMeshPro>& VROSC::SessionInfoPopup::__cordl_internal_get__songUpVotesText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____songUpVotesText;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& VROSC::SessionInfoPopup::__cordl_internal_get__songUpVotesText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____songUpVotesText;
}
constexpr void VROSC::SessionInfoPopup::__cordl_internal_set__songUpVotesText(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____songUpVotesText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::TMPro::TextMeshPro>& VROSC::SessionInfoPopup::__cordl_internal_get__songDownloadsText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____songDownloadsText;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& VROSC::SessionInfoPopup::__cordl_internal_get__songDownloadsText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____songDownloadsText;
}
constexpr void VROSC::SessionInfoPopup::__cordl_internal_set__songDownloadsText(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____songDownloadsText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::UIToggle>& VROSC::SessionInfoPopup::__cordl_internal_get__upVoteButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____upVoteButton;
}
constexpr ::UnityW<::VROSC::UIToggle> const& VROSC::SessionInfoPopup::__cordl_internal_get__upVoteButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____upVoteButton;
}
constexpr void VROSC::SessionInfoPopup::__cordl_internal_set__upVoteButton(::UnityW<::VROSC::UIToggle>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____upVoteButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::UIToggle>& VROSC::SessionInfoPopup::__cordl_internal_get__favoriteButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____favoriteButton;
}
constexpr ::UnityW<::VROSC::UIToggle> const& VROSC::SessionInfoPopup::__cordl_internal_get__favoriteButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____favoriteButton;
}
constexpr void VROSC::SessionInfoPopup::__cordl_internal_set__favoriteButton(::UnityW<::VROSC::UIToggle>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____favoriteButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::UIButton>& VROSC::SessionInfoPopup::__cordl_internal_get__setAsTemplateButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____setAsTemplateButton;
}
constexpr ::UnityW<::VROSC::UIButton> const& VROSC::SessionInfoPopup::__cordl_internal_get__setAsTemplateButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____setAsTemplateButton;
}
constexpr void VROSC::SessionInfoPopup::__cordl_internal_set__setAsTemplateButton(::UnityW<::VROSC::UIButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____setAsTemplateButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::TMPro::TextMeshPro>& VROSC::SessionInfoPopup::__cordl_internal_get__setAsTemplateErrorText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____setAsTemplateErrorText;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& VROSC::SessionInfoPopup::__cordl_internal_get__setAsTemplateErrorText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____setAsTemplateErrorText;
}
constexpr void VROSC::SessionInfoPopup::__cordl_internal_set__setAsTemplateErrorText(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____setAsTemplateErrorText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& VROSC::SessionInfoPopup::__cordl_internal_get__maxContributors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxContributors;
}
constexpr int32_t const& VROSC::SessionInfoPopup::__cordl_internal_get__maxContributors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxContributors;
}
constexpr void VROSC::SessionInfoPopup::__cordl_internal_set__maxContributors(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxContributors = value;
}
constexpr int32_t& VROSC::SessionInfoPopup::__cordl_internal_get__maxTags()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxTags;
}
constexpr int32_t const& VROSC::SessionInfoPopup::__cordl_internal_get__maxTags() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxTags;
}
constexpr void VROSC::SessionInfoPopup::__cordl_internal_set__maxTags(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxTags = value;
}
constexpr ::UnityW<::VROSC::SessionsLibraryUI>& VROSC::SessionInfoPopup::__cordl_internal_get__sessionsLibraryUI()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sessionsLibraryUI;
}
constexpr ::UnityW<::VROSC::SessionsLibraryUI> const& VROSC::SessionInfoPopup::__cordl_internal_get__sessionsLibraryUI() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sessionsLibraryUI;
}
constexpr void VROSC::SessionInfoPopup::__cordl_internal_set__sessionsLibraryUI(::UnityW<::VROSC::SessionsLibraryUI>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sessionsLibraryUI)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::SessionUIData*& VROSC::SessionInfoPopup::__cordl_internal_get__sessionUIData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sessionUIData;
}
constexpr ::VROSC::SessionUIData* const& VROSC::SessionInfoPopup::__cordl_internal_get__sessionUIData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sessionUIData;
}
constexpr void VROSC::SessionInfoPopup::__cordl_internal_set__sessionUIData(::VROSC::SessionUIData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sessionUIData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::UIDataButton>>*& VROSC::SessionInfoPopup::__cordl_internal_get__contributorButtons()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____contributorButtons;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::UIDataButton>>* const& VROSC::SessionInfoPopup::__cordl_internal_get__contributorButtons() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____contributorButtons;
}
constexpr void VROSC::SessionInfoPopup::__cordl_internal_set__contributorButtons(::System::Collections::Generic::List_1<::UnityW<::VROSC::UIDataButton>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____contributorButtons)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::UIDataButton>>*& VROSC::SessionInfoPopup::__cordl_internal_get__tagsButtons()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tagsButtons;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::VROSC::UIDataButton>>* const& VROSC::SessionInfoPopup::__cordl_internal_get__tagsButtons() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tagsButtons;
}
constexpr void VROSC::SessionInfoPopup::__cordl_internal_set__tagsButtons(::System::Collections::Generic::List_1<::UnityW<::VROSC::UIDataButton>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____tagsButtons)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::SessionInfoPopup::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionInfoPopup*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SessionInfoPopup::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionInfoPopup*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SessionInfoPopup::Setup(::VROSC::SessionsLibraryUI*  sessionsLibraryUI)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionInfoPopup*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::SessionsLibraryUI*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sessionsLibraryUI);
}
inline void VROSC::SessionInfoPopup::UpdateInfo(::VROSC::SessionUIData*  sessionUIData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionInfoPopup*>::get(),
                        "UpdateInfo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::SessionUIData*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sessionUIData);
}
inline void VROSC::SessionInfoPopup::SetupContributorButtons(::System::Collections::Generic::List_1<::StringW>*  contributorNames)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionInfoPopup*>::get(),
                        "SetupContributorButtons",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, contributorNames);
}
inline void VROSC::SessionInfoPopup::SetupTagsButtons(::System::Collections::Generic::List_1<::StringW>*  tags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionInfoPopup*>::get(),
                        "SetupTagsButtons",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, tags);
}
inline void VROSC::SessionInfoPopup::ContributorButtonPressed(::System::Object*  data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionInfoPopup*>::get(),
                        "ContributorButtonPressed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data);
}
inline void VROSC::SessionInfoPopup::TagButtonPressed(::System::Object*  data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionInfoPopup*>::get(),
                        "TagButtonPressed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data);
}
inline void VROSC::SessionInfoPopup::UpVoteButtonToggled(::VROSC::InputDevice*  device, bool  isOn)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionInfoPopup*>::get(),
                        "UpVoteButtonToggled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, device, isOn);
}
inline void VROSC::SessionInfoPopup::FavoriteButtonToggled(::VROSC::InputDevice*  device, bool  isOn)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionInfoPopup*>::get(),
                        "FavoriteButtonToggled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, device, isOn);
}
inline void VROSC::SessionInfoPopup::SetAsTemplateButtonClicked(::VROSC::ClickData*  clickData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionInfoPopup*>::get(),
                        "SetAsTemplateButtonClicked",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::ClickData*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, clickData);
}
inline void VROSC::SessionInfoPopup::SaveTemplateSucceeded()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionInfoPopup*>::get(),
                        "SaveTemplateSucceeded",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SessionInfoPopup::SaveTemplateFailed(::VROSC::Error  error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionInfoPopup*>::get(),
                        "SaveTemplateFailed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Error>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, error);
}
inline void VROSC::SessionInfoPopup::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionInfoPopup*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SessionInfoPopup::_UpVoteButtonToggled_b__27_0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionInfoPopup*>::get(),
                        "<UpVoteButtonToggled>b__27_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SessionInfoPopup::_UpVoteButtonToggled_b__27_1(::VROSC::Error  error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionInfoPopup*>::get(),
                        "<UpVoteButtonToggled>b__27_1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Error>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, error);
}
inline void VROSC::SessionInfoPopup::_UpVoteButtonToggled_b__27_2()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionInfoPopup*>::get(),
                        "<UpVoteButtonToggled>b__27_2",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SessionInfoPopup::_UpVoteButtonToggled_b__27_3(::VROSC::Error  error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionInfoPopup*>::get(),
                        "<UpVoteButtonToggled>b__27_3",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Error>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, error);
}
inline void VROSC::SessionInfoPopup::_FavoriteButtonToggled_b__28_0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionInfoPopup*>::get(),
                        "<FavoriteButtonToggled>b__28_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SessionInfoPopup::_FavoriteButtonToggled_b__28_1(::VROSC::Error  error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionInfoPopup*>::get(),
                        "<FavoriteButtonToggled>b__28_1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Error>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, error);
}
inline void VROSC::SessionInfoPopup::_FavoriteButtonToggled_b__28_2()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionInfoPopup*>::get(),
                        "<FavoriteButtonToggled>b__28_2",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SessionInfoPopup::_FavoriteButtonToggled_b__28_3(::VROSC::Error  error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionInfoPopup*>::get(),
                        "<FavoriteButtonToggled>b__28_3",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Error>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, error);
}
inline ::VROSC::SessionInfoPopup* VROSC::SessionInfoPopup::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::SessionInfoPopup*>());
}
// Ctor Parameters []
constexpr ::VROSC::SessionInfoPopup::SessionInfoPopup()   {
}
