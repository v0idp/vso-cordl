#pragma once
// IWYU pragma private; include "Unity/Services/Core/Internal/Serialization/NewtonsoftSerializer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Services/Core/Internal/Serialization/zzzz__IJsonSerializer_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(NewtonsoftSerializer)
namespace Newtonsoft::Json {
class JsonSerializerSettings;
}
namespace Newtonsoft::Json {
class JsonSerializer;
}
// Forward declare root types
namespace Unity::Services::Core::Internal::Serialization {
class NewtonsoftSerializer;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Internal::Serialization::NewtonsoftSerializer);
// Dependencies System.Object, Unity.Services.Core.Internal.Serialization.IJsonSerializer
namespace Unity::Services::Core::Internal::Serialization {
// Is value type: false
// CS Name: Unity.Services.Core.Internal.Serialization.NewtonsoftSerializer
class CORDL_TYPE NewtonsoftSerializer : public ::System::Object {
public:
// Declarations
/// @brief Field m_Serializer, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Serializer, put=__cordl_internal_set_m_Serializer)) ::Newtonsoft::Json::JsonSerializer*  m_Serializer;

/// @brief Convert operator to "::Unity::Services::Core::Internal::Serialization::IJsonSerializer"
constexpr operator  ::Unity::Services::Core::Internal::Serialization::IJsonSerializer*() noexcept;

/// @brief Method DeserializeObject, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
template<typename T>
inline T DeserializeObject(::StringW  value) ;

static inline ::Unity::Services::Core::Internal::Serialization::NewtonsoftSerializer* New_ctor(::Newtonsoft::Json::JsonSerializer*  serializer) ;

static inline ::Unity::Services::Core::Internal::Serialization::NewtonsoftSerializer* New_ctor(::Newtonsoft::Json::JsonSerializerSettings*  settings) ;

constexpr ::Newtonsoft::Json::JsonSerializer* const& __cordl_internal_get_m_Serializer() const;

constexpr ::Newtonsoft::Json::JsonSerializer*& __cordl_internal_get_m_Serializer() ;

constexpr void __cordl_internal_set_m_Serializer(::Newtonsoft::Json::JsonSerializer*  value) ;

/// @brief Method .ctor, addr 0x2ea41a8, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::Newtonsoft::Json::JsonSerializer*  serializer) ;

/// @brief Method .ctor, addr 0x2ea4170, size 0x38, virtual false, abstract: false, final false
inline void _ctor(::Newtonsoft::Json::JsonSerializerSettings*  settings) ;

/// @brief Convert to "::Unity::Services::Core::Internal::Serialization::IJsonSerializer"
constexpr ::Unity::Services::Core::Internal::Serialization::IJsonSerializer* i___Unity__Services__Core__Internal__Serialization__IJsonSerializer() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NewtonsoftSerializer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NewtonsoftSerializer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NewtonsoftSerializer(NewtonsoftSerializer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NewtonsoftSerializer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NewtonsoftSerializer(NewtonsoftSerializer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12019};

/// @brief Field m_Serializer, offset: 0x10, size: 0x8, def value: None
 ::Newtonsoft::Json::JsonSerializer*  ___m_Serializer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Services::Core::Internal::Serialization::NewtonsoftSerializer, ___m_Serializer) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Internal::Serialization::NewtonsoftSerializer, 0x18>, "Size mismatch!");

} // namespace end def Unity::Services::Core::Internal::Serialization
NEED_NO_BOX(::Unity::Services::Core::Internal::Serialization::NewtonsoftSerializer);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Internal::Serialization::NewtonsoftSerializer*, "Unity.Services.Core.Internal.Serialization", "NewtonsoftSerializer");
