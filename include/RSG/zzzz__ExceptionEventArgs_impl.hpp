#pragma once
// IWYU pragma private; include "RSG/ExceptionEventArgs.hpp"
#include "System/zzzz__EventArgs_impl.hpp"
#include "RSG/zzzz__ExceptionEventArgs_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::RSG::ExceptionEventArgs._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RSG::ExceptionEventArgs::*)(::System::Exception*)>(&::RSG::ExceptionEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x17f39bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::ExceptionEventArgs*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RSG::ExceptionEventArgs.get_Exception
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (::RSG::ExceptionEventArgs::*)()>(&::RSG::ExceptionEventArgs::get_Exception)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17f3a28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::ExceptionEventArgs*>::get(),
                        "get_Exception",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RSG::ExceptionEventArgs.set_Exception
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RSG::ExceptionEventArgs::*)(::System::Exception*)>(&::RSG::ExceptionEventArgs::set_Exception)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17f3a30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::ExceptionEventArgs*>::get(),
                        "set_Exception",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Exception*& RSG::ExceptionEventArgs::__cordl_internal_get__Exception_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Exception_k__BackingField;
}
constexpr ::System::Exception* const& RSG::ExceptionEventArgs::__cordl_internal_get__Exception_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Exception_k__BackingField;
}
constexpr void RSG::ExceptionEventArgs::__cordl_internal_set__Exception_k__BackingField(::System::Exception*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Exception_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void RSG::ExceptionEventArgs::_ctor(::System::Exception*  exception)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::ExceptionEventArgs*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, exception);
}
inline ::System::Exception* RSG::ExceptionEventArgs::get_Exception()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::ExceptionEventArgs*>::get(),
                        "get_Exception",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Exception*, false>(this, ___internal_method);
}
inline void RSG::ExceptionEventArgs::set_Exception(::System::Exception*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::ExceptionEventArgs*>::get(),
                        "set_Exception",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::RSG::ExceptionEventArgs* RSG::ExceptionEventArgs::New_ctor(::System::Exception*  exception)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::RSG::ExceptionEventArgs*>(exception));
}
// Ctor Parameters []
constexpr ::RSG::ExceptionEventArgs::ExceptionEventArgs()   {
}
