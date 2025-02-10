#pragma once
// IWYU pragma private; include "VROSC/TooltipData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VROSC/zzzz__HighlightControllerComponents_impl.hpp"
#include "VROSC/zzzz__TooltipData_def.hpp"
#include "VROSC/UI/zzzz__IconData_def.hpp"
#include "VROSC/zzzz__HighlightControllerComponents_def.hpp"
//  Writing Method size for method: ::VROSC::TooltipData.get_Text
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::VROSC::TooltipData::*)()>(&::VROSC::TooltipData::get_Text)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1734eec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TooltipData*>::get(),
                        "get_Text",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TooltipData.get_Component
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::HighlightControllerComponents_Component (::VROSC::TooltipData::*)()>(&::VROSC::TooltipData::get_Component)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1734ef4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TooltipData*>::get(),
                        "get_Component",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TooltipData.get_IconData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::VROSC::UI::IconData> (::VROSC::TooltipData::*)()>(&::VROSC::TooltipData::get_IconData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1734efc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TooltipData*>::get(),
                        "get_IconData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TooltipData._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TooltipData::*)(::VROSC::HighlightControllerComponents_Component, ::StringW)>(&::VROSC::TooltipData::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x172e7e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TooltipData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::HighlightControllerComponents_Component>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TooltipData._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TooltipData::*)(::VROSC::HighlightControllerComponents_Component, ::StringW, ::VROSC::UI::IconData*)>(&::VROSC::TooltipData::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1734f04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TooltipData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::HighlightControllerComponents_Component>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::UI::IconData*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& VROSC::TooltipData::__cordl_internal_get__text()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____text;
}
constexpr ::StringW const& VROSC::TooltipData::__cordl_internal_get__text() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____text;
}
constexpr void VROSC::TooltipData::__cordl_internal_set__text(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____text)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::HighlightControllerComponents_Component& VROSC::TooltipData::__cordl_internal_get__component()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____component;
}
constexpr ::VROSC::HighlightControllerComponents_Component const& VROSC::TooltipData::__cordl_internal_get__component() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____component;
}
constexpr void VROSC::TooltipData::__cordl_internal_set__component(::VROSC::HighlightControllerComponents_Component  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____component = value;
}
constexpr ::UnityW<::VROSC::UI::IconData>& VROSC::TooltipData::__cordl_internal_get__iconData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____iconData;
}
constexpr ::UnityW<::VROSC::UI::IconData> const& VROSC::TooltipData::__cordl_internal_get__iconData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____iconData;
}
constexpr void VROSC::TooltipData::__cordl_internal_set__iconData(::UnityW<::VROSC::UI::IconData>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____iconData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW VROSC::TooltipData::get_Text()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TooltipData*>::get(),
                        "get_Text",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::VROSC::HighlightControllerComponents_Component VROSC::TooltipData::get_Component()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TooltipData*>::get(),
                        "get_Component",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::HighlightControllerComponents_Component, false>(this, ___internal_method);
}
inline ::UnityW<::VROSC::UI::IconData> VROSC::TooltipData::get_IconData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TooltipData*>::get(),
                        "get_IconData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::VROSC::UI::IconData>, false>(this, ___internal_method);
}
inline void VROSC::TooltipData::_ctor(::VROSC::HighlightControllerComponents_Component  component, ::StringW  text)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TooltipData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::HighlightControllerComponents_Component>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, component, text);
}
inline void VROSC::TooltipData::_ctor(::VROSC::HighlightControllerComponents_Component  component, ::StringW  text, ::VROSC::UI::IconData*  iconData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TooltipData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::HighlightControllerComponents_Component>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::UI::IconData*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, component, text, iconData);
}
inline ::VROSC::TooltipData* VROSC::TooltipData::New_ctor(::VROSC::HighlightControllerComponents_Component  component, ::StringW  text)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::TooltipData*>(component, text));
}
inline ::VROSC::TooltipData* VROSC::TooltipData::New_ctor(::VROSC::HighlightControllerComponents_Component  component, ::StringW  text, ::VROSC::UI::IconData*  iconData)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::TooltipData*>(component, text, iconData));
}
// Ctor Parameters []
constexpr ::VROSC::TooltipData::TooltipData()   {
}
