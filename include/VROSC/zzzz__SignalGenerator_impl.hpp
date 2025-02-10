#pragma once
// IWYU pragma private; include "VROSC/SignalGenerator.hpp"
#include "VROSC/zzzz__Node_impl.hpp"
#include "VROSC/zzzz__SignalGenerator_def.hpp"
#include "VROSC/zzzz__SignalGenerator_def.hpp"
#include "VROSC/zzzz__SignalNode_def.hpp"
#include "VROSC/zzzz__Signal_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::SignalGenerator_Type::SignalGenerator_Type(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::VROSC::SignalGenerator_Type::SignalGenerator_Type()   {
}
constexpr ::VROSC::SignalGenerator_Type  VROSC::SignalGenerator_Type::Constant{static_cast<int32_t>(0x0)};
constexpr ::VROSC::SignalGenerator_Type  VROSC::SignalGenerator_Type::Beat{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::VROSC::SignalGenerator.Update
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SignalGenerator::*)()>(&::VROSC::SignalGenerator::Update)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x1725a98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SignalGenerator*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SignalGenerator._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SignalGenerator::*)()>(&::VROSC::SignalGenerator::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x1725be0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SignalGenerator*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr bool& VROSC::SignalGenerator::__cordl_internal_get__bypass()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bypass;
}
constexpr bool const& VROSC::SignalGenerator::__cordl_internal_get__bypass() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bypass;
}
constexpr void VROSC::SignalGenerator::__cordl_internal_set__bypass(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bypass = value;
}
constexpr ::ArrayW<::UnityW<::VROSC::SignalNode>,::Array<::UnityW<::VROSC::SignalNode>>*>& VROSC::SignalGenerator::__cordl_internal_get__output()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____output;
}
constexpr ::ArrayW<::UnityW<::VROSC::SignalNode>,::Array<::UnityW<::VROSC::SignalNode>>*> const& VROSC::SignalGenerator::__cordl_internal_get__output() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____output;
}
constexpr void VROSC::SignalGenerator::__cordl_internal_set__output(::ArrayW<::UnityW<::VROSC::SignalNode>,::Array<::UnityW<::VROSC::SignalNode>>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____output)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::Signal*& VROSC::SignalGenerator::__cordl_internal_get__signal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____signal;
}
constexpr ::VROSC::Signal* const& VROSC::SignalGenerator::__cordl_internal_get__signal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____signal;
}
constexpr void VROSC::SignalGenerator::__cordl_internal_set__signal(::VROSC::Signal*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____signal)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::SignalGenerator_Type& VROSC::SignalGenerator::__cordl_internal_get__type()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____type;
}
constexpr ::VROSC::SignalGenerator_Type const& VROSC::SignalGenerator::__cordl_internal_get__type() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____type;
}
constexpr void VROSC::SignalGenerator::__cordl_internal_set__type(::VROSC::SignalGenerator_Type  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____type = value;
}
inline void VROSC::SignalGenerator::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SignalGenerator*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::SignalGenerator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SignalGenerator*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::SignalGenerator* VROSC::SignalGenerator::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::SignalGenerator*>());
}
// Ctor Parameters []
constexpr ::VROSC::SignalGenerator::SignalGenerator()   {
}
