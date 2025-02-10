#pragma once
// IWYU pragma private; include "System/Data/Common/SqlMoneyStorage.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Data/Common/zzzz__DataStorage_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SqlMoneyStorage)
namespace System::Collections {
class BitArray;
}
namespace System::Data::SqlTypes {
struct SqlMoney;
}
namespace System::Data {
struct AggregateType;
}
namespace System::Data {
class DataColumn;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Data::Common {
class SqlMoneyStorage;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::Common::SqlMoneyStorage);
// Dependencies System.Data.Common.DataStorage
namespace System::Data::Common {
// Is value type: false
// CS Name: System.Data.Common.SqlMoneyStorage
class CORDL_TYPE SqlMoneyStorage : public ::System::Data::Common::DataStorage {
public:
// Declarations
/// @brief Field _values, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__values, put=__cordl_internal_set__values)) ::ArrayW<::System::Data::SqlTypes::SqlMoney,::Array<::System::Data::SqlTypes::SqlMoney>*>  _values;

/// @brief Method Aggregate, addr 0x2af9038, size 0xf04, virtual true, abstract: false, final false
inline ::System::Object* Aggregate(::ArrayW<int32_t,::Array<int32_t>*>  records, ::System::Data::AggregateType  kind) ;

/// @brief Method Compare, addr 0x2af9f3c, size 0xa8, virtual true, abstract: false, final false
inline int32_t Compare(int32_t  recordNo1, int32_t  recordNo2) ;

/// @brief Method CompareValueTo, addr 0x2af9fe4, size 0xbc, virtual true, abstract: false, final false
inline int32_t CompareValueTo(int32_t  recordNo, ::System::Object*  value) ;

/// @brief Method ConvertObjectToXml, addr 0x2afa640, size 0x2a0, virtual true, abstract: false, final false
inline ::StringW ConvertObjectToXml(::System::Object*  value) ;

/// @brief Method ConvertValue, addr 0x2afa0a0, size 0x78, virtual true, abstract: false, final false
inline ::System::Object* ConvertValue(::System::Object*  value) ;

/// @brief Method ConvertXmlToObject, addr 0x2afa358, size 0x2e8, virtual true, abstract: false, final false
inline ::System::Object* ConvertXmlToObject(::StringW  s) ;

/// @brief Method Copy, addr 0x2afa118, size 0x3c, virtual true, abstract: false, final false
inline void Copy(int32_t  recordNo1, int32_t  recordNo2) ;

/// @brief Method CopyValue, addr 0x2afa928, size 0x108, virtual true, abstract: false, final false
inline void CopyValue(int32_t  record, ::System::Object*  store, ::System::Collections::BitArray*  nullbits, int32_t  storeIndex) ;

/// @brief Method Get, addr 0x2afa154, size 0x84, virtual true, abstract: false, final false
inline ::System::Object* Get(int32_t  record) ;

/// @brief Method GetEmptyStorage, addr 0x2afa8e0, size 0x48, virtual true, abstract: false, final false
inline ::System::Object* GetEmptyStorage(int32_t  recordCount) ;

/// @brief Method IsNull, addr 0x2afa1d8, size 0x7c, virtual true, abstract: false, final false
inline bool IsNull(int32_t  record) ;

static inline ::System::Data::Common::SqlMoneyStorage* New_ctor(::System::Data::DataColumn*  column) ;

/// @brief Method Set, addr 0x2afa254, size 0x4c, virtual true, abstract: false, final false
inline void Set(int32_t  record, ::System::Object*  value) ;

/// @brief Method SetCapacity, addr 0x2afa2a0, size 0xb8, virtual true, abstract: false, final false
inline void SetCapacity(int32_t  capacity) ;

/// @brief Method SetStorage, addr 0x2afaa30, size 0x98, virtual true, abstract: false, final false
inline void SetStorage(::System::Object*  store, ::System::Collections::BitArray*  nullbits) ;

constexpr ::ArrayW<::System::Data::SqlTypes::SqlMoney,::Array<::System::Data::SqlTypes::SqlMoney>*> const& __cordl_internal_get__values() const;

constexpr ::ArrayW<::System::Data::SqlTypes::SqlMoney,::Array<::System::Data::SqlTypes::SqlMoney>*>& __cordl_internal_get__values() ;

constexpr void __cordl_internal_set__values(::ArrayW<::System::Data::SqlTypes::SqlMoney,::Array<::System::Data::SqlTypes::SqlMoney>*>  value) ;

/// @brief Method .ctor, addr 0x2af8ef8, size 0x140, virtual false, abstract: false, final false
inline void _ctor(::System::Data::DataColumn*  column) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SqlMoneyStorage() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SqlMoneyStorage", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SqlMoneyStorage(SqlMoneyStorage && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SqlMoneyStorage", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SqlMoneyStorage(SqlMoneyStorage const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8267};

/// @brief Field _values, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<::System::Data::SqlTypes::SqlMoney,::Array<::System::Data::SqlTypes::SqlMoney>*>  ____values;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Data::Common::SqlMoneyStorage, ____values) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Data::Common::SqlMoneyStorage, 0x58>, "Size mismatch!");

} // namespace end def System::Data::Common
NEED_NO_BOX(::System::Data::Common::SqlMoneyStorage);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::Common::SqlMoneyStorage*, "System.Data.Common", "SqlMoneyStorage");
