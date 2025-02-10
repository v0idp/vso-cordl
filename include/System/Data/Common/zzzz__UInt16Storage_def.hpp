#pragma once
// IWYU pragma private; include "System/Data/Common/UInt16Storage.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Data/Common/zzzz__DataStorage_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UInt16Storage)
namespace System::Collections {
class BitArray;
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
class UInt16Storage;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::Common::UInt16Storage);
// Dependencies System.Data.Common.DataStorage
namespace System::Data::Common {
// Is value type: false
// CS Name: System.Data.Common.UInt16Storage
class CORDL_TYPE UInt16Storage : public ::System::Data::Common::DataStorage {
public:
// Declarations
/// @brief Field _values, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__values, put=__cordl_internal_set__values)) ::ArrayW<uint16_t,::Array<uint16_t>*>  _values;

/// @brief Field s_defaultValue, offset 0xffffffff, size 0x2 
 __declspec(property(get=getStaticF_s_defaultValue, put=setStaticF_s_defaultValue)) uint16_t  s_defaultValue;

/// @brief Method Aggregate, addr 0x2b03784, size 0x85c, virtual true, abstract: false, final false
inline ::System::Object* Aggregate(::ArrayW<int32_t,::Array<int32_t>*>  records, ::System::Data::AggregateType  kind) ;

/// @brief Method Compare, addr 0x2b03fe0, size 0xbc, virtual true, abstract: false, final false
inline int32_t Compare(int32_t  recordNo1, int32_t  recordNo2) ;

/// @brief Method CompareValueTo, addr 0x2b0409c, size 0x11c, virtual true, abstract: false, final false
inline int32_t CompareValueTo(int32_t  recordNo, ::System::Object*  value) ;

/// @brief Method ConvertObjectToXml, addr 0x2b04710, size 0x98, virtual true, abstract: false, final false
inline ::StringW ConvertObjectToXml(::System::Object*  value) ;

/// @brief Method ConvertValue, addr 0x2b041b8, size 0x148, virtual true, abstract: false, final false
inline ::System::Object* ConvertValue(::System::Object*  value) ;

/// @brief Method ConvertXmlToObject, addr 0x2b04684, size 0x8c, virtual true, abstract: false, final false
inline ::System::Object* ConvertXmlToObject(::StringW  s) ;

/// @brief Method Copy, addr 0x2b04300, size 0x58, virtual true, abstract: false, final false
inline void Copy(int32_t  recordNo1, int32_t  recordNo2) ;

/// @brief Method CopyValue, addr 0x2b047f0, size 0x100, virtual true, abstract: false, final false
inline void CopyValue(int32_t  record, ::System::Object*  store, ::System::Collections::BitArray*  nullbits, int32_t  storeIndex) ;

/// @brief Method Get, addr 0x2b04358, size 0xd0, virtual true, abstract: false, final false
inline ::System::Object* Get(int32_t  record) ;

/// @brief Method GetEmptyStorage, addr 0x2b047a8, size 0x48, virtual true, abstract: false, final false
inline ::System::Object* GetEmptyStorage(int32_t  recordCount) ;

static inline ::System::Data::Common::UInt16Storage* New_ctor(::System::Data::DataColumn*  column) ;

/// @brief Method Set, addr 0x2b04428, size 0x198, virtual true, abstract: false, final false
inline void Set(int32_t  record, ::System::Object*  value) ;

/// @brief Method SetCapacity, addr 0x2b045c0, size 0xc4, virtual true, abstract: false, final false
inline void SetCapacity(int32_t  capacity) ;

/// @brief Method SetStorage, addr 0x2b048f0, size 0x94, virtual true, abstract: false, final false
inline void SetStorage(::System::Object*  store, ::System::Collections::BitArray*  nullbits) ;

constexpr ::ArrayW<uint16_t,::Array<uint16_t>*> const& __cordl_internal_get__values() const;

constexpr ::ArrayW<uint16_t,::Array<uint16_t>*>& __cordl_internal_get__values() ;

constexpr void __cordl_internal_set__values(::ArrayW<uint16_t,::Array<uint16_t>*>  value) ;

/// @brief Method .ctor, addr 0x2b0366c, size 0x118, virtual false, abstract: false, final false
inline void _ctor(::System::Data::DataColumn*  column) ;

static inline uint16_t getStaticF_s_defaultValue() ;

static inline void setStaticF_s_defaultValue(uint16_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UInt16Storage() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UInt16Storage", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UInt16Storage(UInt16Storage && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UInt16Storage", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UInt16Storage(UInt16Storage const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8276};

/// @brief Field _values, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<uint16_t,::Array<uint16_t>*>  ____values;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Data::Common::UInt16Storage, ____values) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Data::Common::UInt16Storage, 0x58>, "Size mismatch!");

} // namespace end def System::Data::Common
NEED_NO_BOX(::System::Data::Common::UInt16Storage);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::Common::UInt16Storage*, "System.Data.Common", "UInt16Storage");
