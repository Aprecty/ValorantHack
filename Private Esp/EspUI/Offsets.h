namespace offsets
{
        constexpr uint64_t uworld_state = 0x8F8F740;
  
	constexpr uint64_t uworld_key = uworld_state + 0x38;
	
	constexpr uint64_t override_materials = 0x4f8;
  
	constexpr uint64_t game_instance = 0x1A8;
  
	constexpr uint64_t persistent_level = 0x38;
  
	constexpr uint64_t local_player_array = 0x40;
  
	constexpr uint64_t local_player_controller = 0x38;
  
	constexpr uint64_t local_player_pawn = 0x460;
  
	constexpr uint64_t control_rotation = 0x440;
  
	constexpr uint64_t camera_manager = 0x478;
  
	constexpr uint64_t camera_position = 0x1240;
  
	constexpr uint64_t camera_rotation = 0x124C;
  
	constexpr uint64_t camera_fov = 0x1258;
  
	constexpr uint64_t actor_array = 0xA0;
  
	constexpr uint64_t actor_count = 0xB8;
  
	constexpr uint64_t unique_id = 0x38;
  
	constexpr uint64_t mesh_component = 0x430;
  
	constexpr uint64_t last_render_time = 0x350;
  
	constexpr uint64_t last_submit_time = 0x358;
  
	constexpr uint64_t bone_array = 0x558;
  
	constexpr uint64_t bone_count = 0x560; // MAY BE OUTDATED
  
	constexpr uint64_t component_to_world = 0x250;
  
	constexpr uint64_t root_component = 0x230;
  
	constexpr uint64_t root_position = 0x164;
  
	constexpr uint64_t damage_handler = 0x9A0;
  
	constexpr uint64_t health = 0x1B0;
  
	constexpr uint64_t dormant = 0x120;
  
	constexpr uint64_t player_state = 0x3F0;
  
	constexpr uint64_t team_component = 0x5A0;
  
	constexpr uint64_t team_id = 0xF8;
  
	constexpr auto FresnelIntensity = 0x6B8;
  
	constexpr auto FresnelOffset = 0x694;
  
	constexpr auto CachedFresnelColor = 0x680;
  
	constexpr auto CachedFresnelOffset = 0x684;
  
	constexpr auto CachedFresnelIntensity = 0x688;
  
	constexpr auto CachedLocalFresnelOffset = 0x68c;
	
	constexpr auto LineOfSight = 0x4A60CE0;
  
}
