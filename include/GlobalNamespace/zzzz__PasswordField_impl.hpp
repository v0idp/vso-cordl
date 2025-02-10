#pragma once
// IWYU pragma private; include "GlobalNamespace/PasswordField.hpp"
#include "GlobalNamespace/zzzz__UIInputField_impl.hpp"
#include "GlobalNamespace/zzzz__PasswordField_def.hpp"
#include "TMPro/zzzz__TextMeshPro_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PasswordField.Awake
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PasswordField::*)()>(&::GlobalNamespace::PasswordField::Awake)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x16c442c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PasswordField*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PasswordField*>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PasswordField.OnDestroy
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PasswordField::*)()>(&::GlobalNamespace::PasswordField::OnDestroy)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x16c463c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PasswordField*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PasswordField*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PasswordField.EnteredPasswordChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PasswordField::*)(::StringW)>(&::GlobalNamespace::PasswordField::EnteredPasswordChanged)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x16c47e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PasswordField*>::get(),
                        "EnteredPasswordChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PasswordField._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PasswordField::*)()>(&::GlobalNamespace::PasswordField::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x16c4828;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PasswordField*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TextMeshPro>& GlobalNamespace::PasswordField::__cordl_internal_get__hiddenText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hiddenText;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& GlobalNamespace::PasswordField::__cordl_internal_get__hiddenText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hiddenText;
}
constexpr void GlobalNamespace::PasswordField::__cordl_internal_set__hiddenText(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____hiddenText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::PasswordField::Awake()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PasswordField*>::get(),
                    11
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PasswordField::OnDestroy()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PasswordField*>::get(),
                    12
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PasswordField::EnteredPasswordChanged(::StringW  password)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PasswordField*>::get(),
                        "EnteredPasswordChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, password);
}
inline void GlobalNamespace::PasswordField::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PasswordField*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::PasswordField* GlobalNamespace::PasswordField::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PasswordField*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PasswordField::PasswordField()   {
}
