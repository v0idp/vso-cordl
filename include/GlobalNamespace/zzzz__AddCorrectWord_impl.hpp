#pragma once
// IWYU pragma private; include "GlobalNamespace/AddCorrectWord.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__AddCorrectWord_def.hpp"
#include "GlobalNamespace/zzzz__AutocompleteWordPicker_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AddCorrectWord.Start
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AddCorrectWord::*)()>(&::GlobalNamespace::AddCorrectWord::Start)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x16bb110;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AddCorrectWord*>::get(),
                        "Start",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AddCorrectWord.WordChosen
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AddCorrectWord::*)()>(&::GlobalNamespace::AddCorrectWord::WordChosen)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x16bb170;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AddCorrectWord*>::get(),
                        "WordChosen",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AddCorrectWord._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AddCorrectWord::*)()>(&::GlobalNamespace::AddCorrectWord::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16bb5ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AddCorrectWord*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::AutocompleteWordPicker>& GlobalNamespace::AddCorrectWord::__cordl_internal_get_wordPicker()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wordPicker;
}
constexpr ::UnityW<::GlobalNamespace::AutocompleteWordPicker> const& GlobalNamespace::AddCorrectWord::__cordl_internal_get_wordPicker() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wordPicker;
}
constexpr void GlobalNamespace::AddCorrectWord::__cordl_internal_set_wordPicker(::UnityW<::GlobalNamespace::AutocompleteWordPicker>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___wordPicker)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::AddCorrectWord::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AddCorrectWord*>::get(),
                        "Start",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::AddCorrectWord::WordChosen()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AddCorrectWord*>::get(),
                        "WordChosen",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::AddCorrectWord::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AddCorrectWord*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::AddCorrectWord* GlobalNamespace::AddCorrectWord::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::AddCorrectWord*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AddCorrectWord::AddCorrectWord()   {
}
