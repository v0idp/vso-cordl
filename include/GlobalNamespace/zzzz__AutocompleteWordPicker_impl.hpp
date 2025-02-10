#pragma once
// IWYU pragma private; include "GlobalNamespace/AutocompleteWordPicker.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__AutocompleteWordPicker_def.hpp"
#include "GlobalNamespace/zzzz__NGramGenerator_def.hpp"
#include "UnityEngine/UI/zzzz__InputField_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AutocompleteWordPicker.ReplaceWord
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AutocompleteWordPicker::*)(::StringW)>(&::GlobalNamespace::AutocompleteWordPicker::ReplaceWord)> {
  constexpr static std::size_t size = 0x3bc;
  constexpr static std::size_t addrs = 0x16bb1f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AutocompleteWordPicker*>::get(),
                        "ReplaceWord",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AutocompleteWordPicker.ReverseString
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::GlobalNamespace::AutocompleteWordPicker::ReverseString)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x16bb9f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AutocompleteWordPicker*>::get(),
                        "ReverseString",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AutocompleteWordPicker._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AutocompleteWordPicker::*)()>(&::GlobalNamespace::AutocompleteWordPicker::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16bba64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AutocompleteWordPicker*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::InputField>& GlobalNamespace::AutocompleteWordPicker::__cordl_internal_get_TextField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TextField;
}
constexpr ::UnityW<::UnityEngine::UI::InputField> const& GlobalNamespace::AutocompleteWordPicker::__cordl_internal_get_TextField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TextField;
}
constexpr void GlobalNamespace::AutocompleteWordPicker::__cordl_internal_set_TextField(::UnityW<::UnityEngine::UI::InputField>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___TextField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::NGramGenerator>& GlobalNamespace::AutocompleteWordPicker::__cordl_internal_get_WordPredictor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WordPredictor;
}
constexpr ::UnityW<::GlobalNamespace::NGramGenerator> const& GlobalNamespace::AutocompleteWordPicker::__cordl_internal_get_WordPredictor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WordPredictor;
}
constexpr void GlobalNamespace::AutocompleteWordPicker::__cordl_internal_set_WordPredictor(::UnityW<::GlobalNamespace::NGramGenerator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___WordPredictor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::AutocompleteWordPicker::ReplaceWord(::StringW  correctWord)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AutocompleteWordPicker*>::get(),
                        "ReplaceWord",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, correctWord);
}
inline ::StringW GlobalNamespace::AutocompleteWordPicker::ReverseString(::StringW  s)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AutocompleteWordPicker*>::get(),
                        "ReverseString",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, s);
}
inline void GlobalNamespace::AutocompleteWordPicker::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AutocompleteWordPicker*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::AutocompleteWordPicker* GlobalNamespace::AutocompleteWordPicker::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::AutocompleteWordPicker*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AutocompleteWordPicker::AutocompleteWordPicker()   {
}
