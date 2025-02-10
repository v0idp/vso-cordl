#pragma once
// IWYU pragma private; include "VROSC/Credits/CreditsHeader.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "VROSC/Credits/zzzz__CreditsObject_impl.hpp"
#include "VROSC/Credits/zzzz__CreditsHeader_def.hpp"
#include "TMPro/zzzz__TextMeshPro_def.hpp"
//  Writing Method size for method: ::VROSC::Credits::CreditsHeader.Awake
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Credits::CreditsHeader::*)()>(&::VROSC::Credits::CreditsHeader::Awake)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x17dc460;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Credits::CreditsHeader*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Credits::CreditsHeader.Setup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Credits::CreditsHeader::*)(::StringW)>(&::VROSC::Credits::CreditsHeader::Setup)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x17dc494;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Credits::CreditsHeader*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Credits::CreditsHeader.UpdateVisibility
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Credits::CreditsHeader::*)(float_t)>(&::VROSC::Credits::CreditsHeader::UpdateVisibility)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x17dc520;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Credits::CreditsHeader*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Credits::CreditsHeader*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Credits::CreditsHeader._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Credits::CreditsHeader::*)()>(&::VROSC::Credits::CreditsHeader::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17dc57c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Credits::CreditsHeader*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TextMeshPro>& VROSC::Credits::CreditsHeader::__cordl_internal_get__name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____name;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& VROSC::Credits::CreditsHeader::__cordl_internal_get__name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____name;
}
constexpr void VROSC::Credits::CreditsHeader::__cordl_internal_set__name(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____name)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Color& VROSC::Credits::CreditsHeader::__cordl_internal_get__nameColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nameColor;
}
constexpr ::UnityEngine::Color const& VROSC::Credits::CreditsHeader::__cordl_internal_get__nameColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nameColor;
}
constexpr void VROSC::Credits::CreditsHeader::__cordl_internal_set__nameColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____nameColor = value;
}
inline void VROSC::Credits::CreditsHeader::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Credits::CreditsHeader*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::Credits::CreditsHeader::Setup(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Credits::CreditsHeader*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name);
}
inline void VROSC::Credits::CreditsHeader::UpdateVisibility(float_t  visible)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Credits::CreditsHeader*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, visible);
}
inline void VROSC::Credits::CreditsHeader::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Credits::CreditsHeader*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::Credits::CreditsHeader* VROSC::Credits::CreditsHeader::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::Credits::CreditsHeader*>());
}
// Ctor Parameters []
constexpr ::VROSC::Credits::CreditsHeader::CreditsHeader()   {
}
