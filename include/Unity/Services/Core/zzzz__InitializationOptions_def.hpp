#pragma once
// IWYU pragma private; include "Unity/Services/Core/InitializationOptions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(InitializationOptions)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IDictionary_2;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Unity::Services::Core {
class InitializationOptions;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::InitializationOptions);
// Dependencies System.Object
namespace Unity::Services::Core {
// Is value type: false
// CS Name: Unity.Services.Core.InitializationOptions
class CORDL_TYPE InitializationOptions : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Values)) ::System::Collections::Generic::IDictionary_2<::StringW,::System::Object*>*  Values;

/// @brief Field <Values>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Values_k__BackingField, put=__cordl_internal_set__Values_k__BackingField)) ::System::Collections::Generic::IDictionary_2<::StringW,::System::Object*>*  _Values_k__BackingField;

static inline ::Unity::Services::Core::InitializationOptions* New_ctor() ;

static inline ::Unity::Services::Core::InitializationOptions* New_ctor(::Unity::Services::Core::InitializationOptions*  source) ;

static inline ::Unity::Services::Core::InitializationOptions* New_ctor(::System::Collections::Generic::IDictionary_2<::StringW,::System::Object*>*  values) ;

/// @brief Method SetOption, addr 0x2e9b7e0, size 0xc4, virtual false, abstract: false, final false
inline ::Unity::Services::Core::InitializationOptions* SetOption(::StringW  key, ::StringW  value) ;

constexpr ::System::Collections::Generic::IDictionary_2<::StringW,::System::Object*>* const& __cordl_internal_get__Values_k__BackingField() const;

constexpr ::System::Collections::Generic::IDictionary_2<::StringW,::System::Object*>*& __cordl_internal_get__Values_k__BackingField() ;

constexpr void __cordl_internal_set__Values_k__BackingField(::System::Collections::Generic::IDictionary_2<::StringW,::System::Object*>*  value) ;

/// @brief Method .ctor, addr 0x2e9b6ac, size 0x80, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x2e9b754, size 0x8c, virtual false, abstract: false, final false
inline void _ctor(::Unity::Services::Core::InitializationOptions*  source) ;

/// @brief Method .ctor, addr 0x2e9b72c, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::IDictionary_2<::StringW,::System::Object*>*  values) ;

/// @brief Method get_Values, addr 0x2e9b6a4, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IDictionary_2<::StringW,::System::Object*>* get_Values() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InitializationOptions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InitializationOptions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InitializationOptions(InitializationOptions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InitializationOptions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InitializationOptions(InitializationOptions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12487};

/// @brief Field <Values>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::IDictionary_2<::StringW,::System::Object*>*  ____Values_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Services::Core::InitializationOptions, ____Values_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::InitializationOptions, 0x18>, "Size mismatch!");

} // namespace end def Unity::Services::Core
NEED_NO_BOX(::Unity::Services::Core::InitializationOptions);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::InitializationOptions*, "Unity.Services.Core", "InitializationOptions");
