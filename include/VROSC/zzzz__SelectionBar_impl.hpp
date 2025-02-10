#pragma once
// IWYU pragma private; include "VROSC/SelectionBar.hpp"
#include "VROSC/zzzz__UIScrollableContainer_impl.hpp"
#include "VROSC/zzzz__SelectionBar_def.hpp"
//  Writing Method size for method: ::VROSC::SelectionBar.Awake
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SelectionBar::*)()>(&::VROSC::SelectionBar::Awake)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x1749c6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SelectionBar*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SelectionBar._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SelectionBar::*)()>(&::VROSC::SelectionBar::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1749ca8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SelectionBar*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::StringW,::Array<::StringW>*>& VROSC::SelectionBar::__cordl_internal_get__values()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____values;
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& VROSC::SelectionBar::__cordl_internal_get__values() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____values;
}
constexpr void VROSC::SelectionBar::__cordl_internal_set__values(::ArrayW<::StringW,::Array<::StringW>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____values)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::SelectionBar::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SelectionBar*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SelectionBar::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SelectionBar*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::SelectionBar* VROSC::SelectionBar::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::SelectionBar*>());
}
// Ctor Parameters []
constexpr ::VROSC::SelectionBar::SelectionBar()   {
}
