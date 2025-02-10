#pragma once
// IWYU pragma private; include "Unity/Services/Analytics/TransactionCurrencyConverter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TransactionCurrencyConverter)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace Unity::Services::Analytics {
class TransactionCurrencyConverter;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Analytics::TransactionCurrencyConverter);
// Dependencies System.Object
namespace Unity::Services::Analytics {
// Is value type: false
// CS Name: Unity.Services.Analytics.TransactionCurrencyConverter
class CORDL_TYPE TransactionCurrencyConverter : public ::System::Object {
public:
// Declarations
/// @brief Field m_Iso4217CurrencyMinorUnits, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Iso4217CurrencyMinorUnits, put=__cordl_internal_set_m_Iso4217CurrencyMinorUnits)) ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  m_Iso4217CurrencyMinorUnits;

static inline ::Unity::Services::Analytics::TransactionCurrencyConverter* New_ctor() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>* const& __cordl_internal_get_m_Iso4217CurrencyMinorUnits() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*& __cordl_internal_get_m_Iso4217CurrencyMinorUnits() ;

constexpr void __cordl_internal_set_m_Iso4217CurrencyMinorUnits(::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  value) ;

/// @brief Method .ctor, addr 0x2e8baec, size 0x1b34, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TransactionCurrencyConverter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TransactionCurrencyConverter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TransactionCurrencyConverter(TransactionCurrencyConverter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TransactionCurrencyConverter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TransactionCurrencyConverter(TransactionCurrencyConverter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11854};

/// @brief Field m_Iso4217CurrencyMinorUnits, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  ___m_Iso4217CurrencyMinorUnits;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Services::Analytics::TransactionCurrencyConverter, ___m_Iso4217CurrencyMinorUnits) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Services::Analytics::TransactionCurrencyConverter, 0x18>, "Size mismatch!");

} // namespace end def Unity::Services::Analytics
NEED_NO_BOX(::Unity::Services::Analytics::TransactionCurrencyConverter);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Analytics::TransactionCurrencyConverter*, "Unity.Services.Analytics", "TransactionCurrencyConverter");
