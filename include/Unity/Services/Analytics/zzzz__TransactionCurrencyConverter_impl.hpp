#pragma once
// IWYU pragma private; include "Unity/Services/Analytics/TransactionCurrencyConverter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Analytics/zzzz__TransactionCurrencyConverter_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::Unity::Services::Analytics::TransactionCurrencyConverter._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Analytics::TransactionCurrencyConverter::*)()>(&::Unity::Services::Analytics::TransactionCurrencyConverter::_ctor)> {
  constexpr static std::size_t size = 0x1b34;
  constexpr static std::size_t addrs = 0x2e8baec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::TransactionCurrencyConverter*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*& Unity::Services::Analytics::TransactionCurrencyConverter::__cordl_internal_get_m_Iso4217CurrencyMinorUnits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Iso4217CurrencyMinorUnits;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>* const& Unity::Services::Analytics::TransactionCurrencyConverter::__cordl_internal_get_m_Iso4217CurrencyMinorUnits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Iso4217CurrencyMinorUnits;
}
constexpr void Unity::Services::Analytics::TransactionCurrencyConverter::__cordl_internal_set_m_Iso4217CurrencyMinorUnits(::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Iso4217CurrencyMinorUnits)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Unity::Services::Analytics::TransactionCurrencyConverter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::TransactionCurrencyConverter*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Unity::Services::Analytics::TransactionCurrencyConverter* Unity::Services::Analytics::TransactionCurrencyConverter::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Analytics::TransactionCurrencyConverter*>());
}
// Ctor Parameters []
constexpr ::Unity::Services::Analytics::TransactionCurrencyConverter::TransactionCurrencyConverter()   {
}
