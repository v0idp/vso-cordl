#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/Formatters/Binary/BinaryCrossAppDomainMap.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BinaryCrossAppDomainMap)
namespace System::Runtime::Serialization::Formatters::Binary {
class __BinaryParser;
}
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
class BinaryCrossAppDomainMap;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainMap);
// Dependencies System.Object
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// CS Name: System.Runtime.Serialization.Formatters.Binary.BinaryCrossAppDomainMap
class CORDL_TYPE BinaryCrossAppDomainMap : public ::System::Object {
public:
// Declarations
/// @brief Field crossAppDomainArrayIndex, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_crossAppDomainArrayIndex, put=__cordl_internal_set_crossAppDomainArrayIndex)) int32_t  crossAppDomainArrayIndex;

/// @brief Method Dump, addr 0x2668ff0, size 0x4, virtual false, abstract: false, final false
inline void Dump() ;

static inline ::System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainMap* New_ctor() ;

/// @brief Method Read, addr 0x2668fbc, size 0x34, virtual true, abstract: false, final true
inline void Read(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*  input) ;

constexpr int32_t const& __cordl_internal_get_crossAppDomainArrayIndex() const;

constexpr int32_t& __cordl_internal_get_crossAppDomainArrayIndex() ;

constexpr void __cordl_internal_set_crossAppDomainArrayIndex(int32_t  value) ;

/// @brief Method .ctor, addr 0x2668fb4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BinaryCrossAppDomainMap() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BinaryCrossAppDomainMap", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BinaryCrossAppDomainMap(BinaryCrossAppDomainMap && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BinaryCrossAppDomainMap", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BinaryCrossAppDomainMap(BinaryCrossAppDomainMap const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2918};

/// @brief Field crossAppDomainArrayIndex, offset: 0x10, size: 0x4, def value: None
 int32_t  ___crossAppDomainArrayIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainMap, ___crossAppDomainArrayIndex) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainMap, 0x18>, "Size mismatch!");

} // namespace end def System::Runtime::Serialization::Formatters::Binary
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainMap);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainMap*, "System.Runtime.Serialization.Formatters.Binary", "BinaryCrossAppDomainMap");
