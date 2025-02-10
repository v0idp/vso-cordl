#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Converters/DataSetConverter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/zzzz__JsonConverter_def.hpp"
CORDL_MODULE_EXPORT(DataSetConverter)
namespace Newtonsoft::Json {
class JsonReader;
}
namespace Newtonsoft::Json {
class JsonSerializer;
}
namespace Newtonsoft::Json {
class JsonWriter;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Newtonsoft::Json::Converters {
class DataSetConverter;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Converters::DataSetConverter);
// Dependencies Newtonsoft.Json.JsonConverter
namespace Newtonsoft::Json::Converters {
// Is value type: false
// CS Name: Newtonsoft.Json.Converters.DataSetConverter
class CORDL_TYPE DataSetConverter : public ::Newtonsoft::Json::JsonConverter {
public:
// Declarations
/// @brief Method CanConvert, addr 0x283720c, size 0x94, virtual true, abstract: false, final false
inline bool CanConvert(::System::Type*  valueType) ;

static inline ::Newtonsoft::Json::Converters::DataSetConverter* New_ctor() ;

/// @brief Method ReadJson, addr 0x2836f24, size 0x2e8, virtual true, abstract: false, final false
inline ::System::Object* ReadJson(::Newtonsoft::Json::JsonReader*  reader, ::System::Type*  objectType, ::System::Object*  existingValue, ::Newtonsoft::Json::JsonSerializer*  serializer) ;

/// @brief Method WriteJson, addr 0x2836a94, size 0x488, virtual true, abstract: false, final false
inline void WriteJson(::Newtonsoft::Json::JsonWriter*  writer, ::System::Object*  value, ::Newtonsoft::Json::JsonSerializer*  serializer) ;

/// @brief Method .ctor, addr 0x28372a0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DataSetConverter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DataSetConverter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DataSetConverter(DataSetConverter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DataSetConverter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DataSetConverter(DataSetConverter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9888};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Converters::DataSetConverter, 0x10>, "Size mismatch!");

} // namespace end def Newtonsoft::Json::Converters
NEED_NO_BOX(::Newtonsoft::Json::Converters::DataSetConverter);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Converters::DataSetConverter*, "Newtonsoft.Json.Converters", "DataSetConverter");
