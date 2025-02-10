#pragma once
// IWYU pragma private; include "VROSC/SessionItemUI.hpp"
#include "VROSC/zzzz__PaginatedListItemUI_impl.hpp"
#include "VROSC/zzzz__SessionItemUI_def.hpp"
#include "TMPro/zzzz__TextMeshPro_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "VROSC/zzzz__PaginatedListDataHolder_def.hpp"
#include "VROSC/zzzz__SessionUIData_def.hpp"
//  Writing Method size for method: ::VROSC::SessionItemUI.Awake
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionItemUI::*)()>(&::VROSC::SessionItemUI::Awake)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1759ff0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionItemUI*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionItemUI.SetNewData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionItemUI::*)(::VROSC::PaginatedListDataHolder*)>(&::VROSC::SessionItemUI::SetNewData)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x1759ff8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionItemUI*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionItemUI*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionItemUI.SetUIData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionItemUI::*)(::StringW, ::StringW, ::StringW, ::VROSC::SessionUIData_Type, bool, bool)>(&::VROSC::SessionItemUI::SetUIData)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x175a1f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionItemUI*>::get(),
                        "SetUIData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::SessionUIData_Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SessionItemUI._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SessionItemUI::*)()>(&::VROSC::SessionItemUI::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x175a2f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionItemUI*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TextMeshPro>& VROSC::SessionItemUI::__cordl_internal_get__nameLabel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nameLabel;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& VROSC::SessionItemUI::__cordl_internal_get__nameLabel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nameLabel;
}
constexpr void VROSC::SessionItemUI::__cordl_internal_set__nameLabel(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____nameLabel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::TMPro::TextMeshPro>& VROSC::SessionItemUI::__cordl_internal_get__authorLabel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____authorLabel;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& VROSC::SessionItemUI::__cordl_internal_get__authorLabel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____authorLabel;
}
constexpr void VROSC::SessionItemUI::__cordl_internal_set__authorLabel(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____authorLabel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::TMPro::TextMeshPro>& VROSC::SessionItemUI::__cordl_internal_get__dateLabel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dateLabel;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& VROSC::SessionItemUI::__cordl_internal_get__dateLabel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dateLabel;
}
constexpr void VROSC::SessionItemUI::__cordl_internal_set__dateLabel(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____dateLabel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& VROSC::SessionItemUI::__cordl_internal_get__cloudIcon()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cloudIcon;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& VROSC::SessionItemUI::__cordl_internal_get__cloudIcon() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cloudIcon;
}
constexpr void VROSC::SessionItemUI::__cordl_internal_set__cloudIcon(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cloudIcon)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& VROSC::SessionItemUI::__cordl_internal_get__mySharedIcon()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mySharedIcon;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& VROSC::SessionItemUI::__cordl_internal_get__mySharedIcon() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mySharedIcon;
}
constexpr void VROSC::SessionItemUI::__cordl_internal_set__mySharedIcon(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mySharedIcon)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& VROSC::SessionItemUI::__cordl_internal_get__communityIcon()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____communityIcon;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& VROSC::SessionItemUI::__cordl_internal_get__communityIcon() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____communityIcon;
}
constexpr void VROSC::SessionItemUI::__cordl_internal_set__communityIcon(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____communityIcon)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& VROSC::SessionItemUI::__cordl_internal_get__roomIcon()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____roomIcon;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& VROSC::SessionItemUI::__cordl_internal_get__roomIcon() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____roomIcon;
}
constexpr void VROSC::SessionItemUI::__cordl_internal_set__roomIcon(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____roomIcon)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& VROSC::SessionItemUI::__cordl_internal_get__saveAsDefaultIcon()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____saveAsDefaultIcon;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& VROSC::SessionItemUI::__cordl_internal_get__saveAsDefaultIcon() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____saveAsDefaultIcon;
}
constexpr void VROSC::SessionItemUI::__cordl_internal_set__saveAsDefaultIcon(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____saveAsDefaultIcon)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::SessionItemUI::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionItemUI*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SessionItemUI::SetNewData(::VROSC::PaginatedListDataHolder*  dataholder)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionItemUI*>::get(),
                    5
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dataholder);
}
inline void VROSC::SessionItemUI::SetUIData(::StringW  displayName, ::StringW  authorName, ::StringW  dateText, ::VROSC::SessionUIData_Type  sessionType, bool  hasPositionalData, bool  isSavedAsDefault)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionItemUI*>::get(),
                        "SetUIData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::SessionUIData_Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, displayName, authorName, dateText, sessionType, hasPositionalData, isSavedAsDefault);
}
inline void VROSC::SessionItemUI::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SessionItemUI*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::SessionItemUI* VROSC::SessionItemUI::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::SessionItemUI*>());
}
// Ctor Parameters []
constexpr ::VROSC::SessionItemUI::SessionItemUI()   {
}
